#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

int lenOfLL(Node* head)
{
    Node* temp = head;
    int counter = 0;
    while(temp != nullptr)
    {
        counter += 1;
        temp = temp -> next;
    }

    return counter;
}

void printLL(Node *head)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    return;
}

Node *insretAtHead(Node *head, int elem)
{
    Node *temp = new Node(elem);

    temp->next = head;
    head = temp;
    return head;
}

Node *insertAtTail(Node *head, int elem)
{
    Node *temp = head;
    if (head == nullptr)
    {
        return new Node(elem);
    }

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    Node *new_node = new Node(elem);
    temp->next = new_node;
    return head;
}

Node *insertAtKthElem(Node *head, int elem, int k)
{
    Node *temp = head;
    Node* prev = nullptr;
    int counter = 0;

    Node* new_node = new Node(elem);

    if(k==1)
    {
        return insretAtHead(head, elem);
    }
    if(k == lenOfLL(head))
    {
        return insertAtTail(head, elem);
    }
    while (temp != nullptr)
    {
        counter += 1;
        if (counter == k-1)
        {
            new_node-> next = temp -> next;
            temp -> next = new_node;

            return head;
        }
        temp = temp -> next;
    }

    return nullptr;
}

int main()
{
    vector<int> arr = {2, 5, 6, 7, 8, 9};
    Node *head = nullptr;
    Node *mover = nullptr;

    for (int i = 0; i < 6; i++)
    {

        if (i == 0)
        {
            Node *temp = new Node(arr[i]);
            head = temp;
            mover = temp;
        }

        else
        {
            Node *temp = new Node(arr[i]);
            mover->next = temp;
            mover = temp;
        }
    }

    printLL(head);

    // insert at head
    // Node *new_head = insertAtTail(nullptr, 11);
    // Node *new_head = insretAtHead(nullptr, 11);
    Node *new_head = insertAtKthElem(head, 11, 3);

    printLL(new_head);
    return 0;
}