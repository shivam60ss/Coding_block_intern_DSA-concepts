#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void push(int newData) {
        Node* newNode = new Node(newData);
        newNode->next = head;
        head = newNode;
    }

    void separateOddEven() {
        Node* odd = NULL;
        Node* even = NULL;
        Node* oddTail = NULL;
        Node* evenTail = NULL;

        Node* temp = head;
        while (temp != NULL) {
            if (temp->data % 2 != 0) {
                if (odd == NULL) {
                    odd = temp;
                    oddTail = odd;
                } else {
                    oddTail->next = temp;
                    oddTail = oddTail->next;
                }
            } else {
                if (even == NULL) {
                    even = temp;
                    evenTail = even;
                } else {
                    evenTail->next = temp;
                    evenTail = evenTail->next;
                }
            }
            temp = temp->next;
        }

        if (oddTail != NULL) {
            oddTail->next = even;
        }
        if (evenTail != NULL) {
            evenTail->next = NULL;
        }

        head = odd;
    }

    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        list.push(num);
    }

    list.separateOddEven();

    list.printList();

    return 0;
}