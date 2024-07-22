#include<iostream>
using namespace std;
3
        
int main()
{
    char str[1000];
    cin>>str;
    int n;
    cin>>n;
    int len = strlen(str);
    reverse(str,0,len-1);
    reverse(str,0,len-1);
    reverse(str,n,len-1);
    cout<<str<<endl;


  return 0;
}