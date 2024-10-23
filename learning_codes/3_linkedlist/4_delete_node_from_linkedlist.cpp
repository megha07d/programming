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


void printLL(Node* head)
{
    Node*temp = head;

    while(temp != nullptr)
    {
        cout<< temp-> data << " ";
        temp = temp -> next;
    }

    return;
}

Node* deleteAtHead(Node * head)
{
    if(head == nullptr)
    {
        return nullptr;
    }

    Node* temp = head;

    head = head -> next;

    delete temp;

    return head;
}

Node* deleteAtTail(Node* head)
{
    if(head == nullptr)
    {
        return nullptr;
    }

    else if(head-> next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node* temp = head;

    while(temp-> next -> next != nullptr)
    {
        temp = temp-> next;
    }

    delete temp-> next ;
    temp -> next = nullptr;

    return head;
}



int main()
{
    vector<int> arr = {2, 5, 6, 8, 7, 9};
    Node *head;
    Node *mover;

    // make a linkedlist
    for (int i = 0; i < 6; i++)
    {
        int elem = arr[i];

        Node *temp = new Node(elem);

        if (i == 0)
        {
            head = temp;
            mover = temp;
        }

        mover->next = temp;
        mover = temp;
    }



    // print linkedlist
    cout<< "\nNewly made linkedlist "<< endl;
    printLL(head);

    // delete head 
    Node * del_head = deleteAtHead(head);
    cout<< "\nAfter del at head linkedlist "<< endl;
    printLL(del_head);

    // delete tail 
    Node* del_tail = deleteAtTail(del_head);
    cout<< "\nAfter del at tail linkedlist "<< endl;
    printLL(del_tail);




    return 0;
}