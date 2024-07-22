#include <iostream>
using namespace std;

void BubbleSort_rec(int a[], int n, int i)
{
    if (i == 0)
        return;

    for (int j = 0; j < i; j++)
    {
        if (a[j] > a[j + 1])
        {
            swap(a[j], a[j + 1]);
        }
    }
    BubbleSort_rec(a, n, i - 1);
}

int main()
{
    int a[] = {4, 3, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);
    BubbleSort_rec(a, n, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
