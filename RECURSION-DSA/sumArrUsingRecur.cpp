#include<iostream>
using namespace std;
int recurSum(int arr[],int n){
    if(n==0)
    return 0;
    //chota answer
    //int CA = sum(a+1,n-1);
    //int BadaAns = a[0]+sum(a+1,n-1);

    return arr[0]+sum(arr+1,n-1);

}
        
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    recurSum(arr,n);

  return 0;
}