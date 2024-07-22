#include<iostream>
using namespace std;
        
int main()
{
    //how to declare the 2D array
    int mat[2][3];
    //initiasation + declaretion 
    int mat1[2][3] ={{1,2,3},
                     {4,2,1}};
    int n,m;
    int mat2[n][m];

    int arr[][3]={{1,2,3},{2,3,4}};
    int rows=sizeof(arr)/sizeof(arr[0]);

    cout<<rows<<endl;

                

  return 0;
}