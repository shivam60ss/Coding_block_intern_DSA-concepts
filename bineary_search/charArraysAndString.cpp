
#include<iostream>
using namespace std;
        
int main()
{
    // char arr[]={'a','b','c','\0'};
    // char b[]={'a','b','c','\0'};
    // cout<<arr<<endl;
    // cout<<b<<endl;

    // char name[]="shivam";
    // cout<<name<<endl;

    // for(int i=0;name[i]!='\0';i++)
    // {
    //     cout<<name[i]<<" ";
    // }

    // take input
    // char name1[100];
    // cin>>name1;
    // cout<<name1<<endl;

    //cin egnire white space

    


    char a[1000];
    cin.getline(a,1000,'\n');
    cout<<a<<endl;

    //size of string 

    int size = 0 ;
    for(int i=0;a[i]!='\0';i++)
    {
        size++;
    }
    cout<<size<<endl;
    cout<<strlen(a)<<endl;

    //check pelindrone 

   

    






  return 0;
}