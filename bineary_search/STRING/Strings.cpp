#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
        
int main()
{
    //string to integer
    string num="34656";
    int number=stoi(num);
    cout<<number<<endl;

    //integer to string 
    int n =64654;
    string NumToStr=to_string(n);
    cout<<NumToStr<<endl;

    //cout<<NumToStr.size()<<endl;

    //sort(str.begin(),str.end());
    string s3 ="agdsfd";
    sort(s3.begin(),s3.end());
    cout<<s3<<endl;

    //transform()-> to transfrom from lowercase to uppercase or vice versa
    transform(s3.begin(),s3.end(),s3.begin(),::tolower);
    cout<<s3<<endl;

    //string arary
    string arr[5]={"abc","coding","Hello","leet","shivam"};
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }

    //sort
    cout<<"After sort"<<endl;
    sort(arr,arr+5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    
  return 0;
}
