#include<iostream>
using namespace std;

        
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j= 0;j<m;j++){
            cin>>arr[i][j];
        }        
    }

    for(int i = 0; i<n;i++){
        for(int j=0;j<m;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    cout<<"after swaping "<<endl;
    for(int i = 0; i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
            
        }
        
    }

  return 0;

}