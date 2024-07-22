#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *insert()
{
    int data;
    cout << "Enter the number of nodes: ";
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data--)
    {
        int val;
        cout << "Enter the value of node: ";
        cin >> val;
        if (head == NULL)
        {
            Node *newnode = new Node(val);
            head = newnode;
            tail = newnode;
        }
        else
        {
            Node *newnode = new Node(val);
            tail->next = newnode;
            tail = newnode;
        }
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = insert();
    print(head);

    return 0;
}