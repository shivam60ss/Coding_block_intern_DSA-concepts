#include <iostream>
using namespace std;
bool containsSeven(int arr[],int size,int index=0){
    if(index==size){
        return false;
    }
    if(arr[index] == 9){
        return true;
    }
    //chote ans
    return containsSeven(arr,size,index + 1);
}
//first index 7
int  first_indexSeven(int a[],int n,int i=0){
    //base case
    if(i==n)
    return -1; ///mujhe kuchh nhi mila to return -1

    //recurtion
    if(a[i]==7)
    return i;
    
    return first_indexSeven(a,n,i+1);


}
//all index of 7
int  print_all_index_7(int a[],int n,int i){
    if(i==n){
        return ;
    }
    if(a[i] == 7)
        cout<<i<<" ";
    
    //chote ans
     print_all_index_7(a,n,i + 1);
}




int main(){
    int arr[] = {1,3,8,7,6,7,5,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool result = containsSeven(arr, size);
    if(result){
        cout<<"yes"<<endl;
    } else{
        cout<<"NO"<<endl;
    
    }
    cout<<"first Index"<<endl;
    int a[] = {1,3,8,7,6,7,5,7};
     int n = sizeof(a) / sizeof(arr[0]);
    cout<<first_indexSeven(a,n)<<endl;

    cout<<"print all index of 7"<<endl;
    print_all_index_7(a,n,0);

    return 0;
}
