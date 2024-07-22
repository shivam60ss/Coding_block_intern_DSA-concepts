#include <bits/stdc++.h>
using namespace std;

class Queue {
    private:
        int *a;
        int f;
        int end;
        int cs; // current size of queue
        int n;  // capacity of queue

    public:
        Queue(int size) {
            a = new int[size]; // dynamically allocate array
            n = size;
            f = 0;
            end = size - 1;
            cs = 0;
        }

        void push(int data) {
            if (cs < n) {
                // move end
                end = (end + 1) % n;
                a[end] = data;
                cs++;
            } else {
                cout << "Overflow" << endl;
            }
        }

        void pop() {
            if (cs > 0) {
                f = (f + 1) % n;
                cs--;
            } else {
                cout << "Underflow" << endl;
            }
        }

        int front() { // Renamed from f to front to avoid conflict with member variable f
            if (cs == 0) {
                cout << "Underflow" << endl;
                return -1;
            }
            return a[f];
        }

        bool empty() {
            return cs == 0; // Fixed assignment operator to comparison operator
        }

        int size() {
            return cs;
        }

        ~Queue() {
            delete[] a; // Added destructor to avoid memory leak
        }
};

int main() {
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.size() << endl;
    while (!q.empty()) {
        cout << q.front() << " "; // Changed f() to front()
        q.pop();
    }
    return 0;
}