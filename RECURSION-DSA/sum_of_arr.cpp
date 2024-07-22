#include<iostream>
using namespace std;

int sum2(int a[],int n,int i){
    if(i==n)
    return 0;

    return a[i]+sum2(a,n,i+1);
}
        
int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
   // cout<<sum(a,n)<<endl;
    cout<<sum2(a,n,0)<<endl;
  return 0;
}