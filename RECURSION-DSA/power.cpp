#include<iostream>
using namespace std;

int powers(int x,int n){

    //base case
    if(n==0)
    return 1;
//recursion
    return x*powers(x,n-1);
}
        
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<powers(x,n)<<endl;
  return 0;
}