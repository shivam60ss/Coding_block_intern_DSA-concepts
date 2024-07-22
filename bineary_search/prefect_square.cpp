#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int start = 0, end = num;
    //bool isprefectSquare = false;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (mid * mid == num)
        {
            cout<<mid<<endl;
        
            
            break;
        }
        else if (mid * mid > num)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    

    return 0;
}