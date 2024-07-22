#include<iostream>
using namespace std;
int stringToint(string s,int n){
    if(n==0)
    return 0;
    int ld = s[n-1]-'0';
    //int CA = stringToint(s,n-1);

    return stringToint(s,n-1)*10+ld;
}
        
int main()
{
    string s="123";
    int n=s.size();
    cout<<stringToint(s,n)<<endl;
  return 0;
}