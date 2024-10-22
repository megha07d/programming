#include <iostream>
#include <vector>
#include <stack>
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

Node *reverseLinkedlist_stack(Node *head)
{
    stack<int> st;

    Node *temp = head;
    while (temp != nullptr)
    {
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while (temp != nullptr)
    {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
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

    Node * new_head = reverseLinkedlist_stack(head);
    printLL(new_head);

    return 0;
}