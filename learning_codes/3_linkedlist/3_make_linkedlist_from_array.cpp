#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }

};

int lenofLL(Node* head)
{
    Node* temp = head;
    int count = 0;

    while(temp != nullptr)
    {
        temp = temp -> next;
        count++;
    }

    return count;
}

int main()
{
    vector<int> arr = {2,5,6,8};

    Node* head;Node* mover;

    for(int i=0;i<4;i++)
    {
        int elem = arr[i];

        Node *temp = new Node(elem);

        if(i==0)
        {
            head = temp;
            mover = temp;
        }

        mover -> next = temp;
        mover = temp;

    }

    Node* start = head;
    while(start != nullptr)
    {
        cout << start -> data << " ";
        start = start -> next;
    }

    cout<< "length of this linkedlist = "<< lenofLL(head) << endl;

    return 0;
}