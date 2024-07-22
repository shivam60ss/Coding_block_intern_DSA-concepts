#include<iostream>
using namespace std;
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void print(int n){
    //base case
    if(n==0)
    return ;

    int id=n%10;
    print(n/10);
    cout<<arr[id]<<" ";
}
        
int main()
{
    int num=2048;
    print(num);
    
  return 0;
}