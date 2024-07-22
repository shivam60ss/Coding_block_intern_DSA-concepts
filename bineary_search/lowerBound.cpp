#include<iostream>
#include<vector>
using namespace std;

int Lower_bound(int arr[],int n,int x){
    int n=arr.size();
    int lo=0,hi=n-1;
    int ind=-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;

        //check ar[mid]>=x;
        if(arr[mid]>=x){
            ind = mid;
            hi=mid-1;

        }else if(arr[mid]<x){
            lo=mid+1;

        }
    }
    return ind;
}
        
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;

    int ind=Lower_bound(arr,n,x);
    cout<<ind<<endl;
    //using inbuilt function -> lower_bound
    
  return 0;
}