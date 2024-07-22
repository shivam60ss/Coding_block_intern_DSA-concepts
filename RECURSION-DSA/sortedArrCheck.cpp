#include<iostream>
using namespace std;
bool is_Sorted(int a[],int n){
    if(n==1)
    return true;

    //bool isSmallerSorted = sorted(a+1),n-1);

    return (a[0]<=a[1] )&& is_Sorted(a+1,n-1);
}
bool is_Sorted2(int a[],int n){
  if(n==1)
    return true;

    return (a[n-2]<=a[n-1] && is_Sorted2(a,n-1));

}
        
int main()
{
    int a[]={1,2,3,4,5};
    int n= sizeof(a)/sizeof(int);
    cout<<is_Sorted(a,n)<<endl;
    cout<<is_Sorted2(a,n)<<endl;

  return 0;
}