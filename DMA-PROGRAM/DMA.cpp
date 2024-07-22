#include<iostream>
using namespace std;
        
int main()
{
//how to create the variable in dynamecily
int *a=new int ;
*a=10;
cout<<*a<<endl;
float *b = new float;
*b=10.5;
cout<<*b<<endl;

int *arr=new int[10];
for(int i=0;i<10;i++){
    arr[i]=i+1;

}
for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
//to deallocate dynamecally 
delete a;
delete b;
delete[] arr; 


//how to create a 2d array dynamically
//4*5
int **matrix  = new int *[4];
for(int i=0;i<4;i++){
        matrix[i] = new int[5];
    }


for(int i = 0;i<4;i++){
    for(int j = 0;j<5;j++){
        matrix[i][j] = 0;
}



    //deallocate 
    for(int i=0;i<4;i++){
        delete[] matrix[i];
    }
    delete[] matrix;

  return 0;
}
