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

Node *makeLL(vector<int> &arr)
{
    Node *head = nullptr;
    Node *mover = nullptr;

    for (int i = 0; i < 6; i++)
    {
        Node *temp = new Node(arr[i]);
        if (i == 0)
        {
            head = temp;
            mover = temp;
        }

        mover->next = temp;
        mover = temp;
    }

    return head;
}

void printLL(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return;
}

int lenOfLL(Node *head)
{
    Node *temp = head;
    int counter = 0;
    while (temp != nullptr)
    {
        counter += 1;
        temp = temp->next;
    }
    return counter;
}

Node *deleteKthElem(Node *head, int k)
{
    // empty list
    if (head == nullptr)
    {
        return head;
    }

    int lenOfList = lenOfLL(head);

    // k is over the limit
    if ((k > lenOfList) || (k <= 0))
    {
        return head;
    }
    // delete head
    else if (k == 1)
    {
        Node *temp = head;
        head = head->next;

        delete temp;
        return head;
    }
    // delete tail
    else if (k == lenOfList)
    {
        Node *temp = head;
        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }

        Node *lastmem = temp->next;
        temp->next = nullptr;
        delete lastmem;
        return head;
    }

    // K is some num
    int counter = 1;
    Node *temp = head;

    while (counter != k - 1)
    {
        temp = temp->next;
        counter += 1;
    }
    Node *kthMem = temp->next;
    temp->next = temp->next->next;
    delete kthMem;
    return head;
}

int main()
{
    vector<int> arr = {2, 5, 6, 8, 7, 9};

    Node *head = makeLL(arr);
    printLL(head);
    int length = lenOfLL(head);
    cout << "\n"
         << length << endl;

    Node *new_head = deleteKthElem(head, 5);

    printLL(new_head);

    return 0;
}