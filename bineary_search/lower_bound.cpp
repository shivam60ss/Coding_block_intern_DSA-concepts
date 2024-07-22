
//lower-bound()
#include<iostream>
using namespace std;
       
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int ind=-1;

    for(int i =0;i<n;i++){
        if(arr[i]>=key){
            ind=i;
            break;
            
        }
    }
    cout<<ind<<endl;

 

  return 0;
}