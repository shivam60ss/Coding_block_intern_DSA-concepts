#include<iostream>
using namespace std;
        
int main()
{
    int n,m;
    cout<<"enter the number:";
    
    cin>>n>>m;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    

    for(int i=0;i<n;i++){
        
        for(int j=0;j<m;j++){
            
            cout<<mat[i][j];
        }
    }
        
    
    
  return 0;
}