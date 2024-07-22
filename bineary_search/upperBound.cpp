

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
    //lower-bound()  using brute_force
    int ind=-1;

    for(int i =0;i<n;i++){
        if(arr[i]>key){
            ind=i;
            break;
            
        }
    }
    cout<<ind<<endl;

    //using binary search
 

  return 0;
}