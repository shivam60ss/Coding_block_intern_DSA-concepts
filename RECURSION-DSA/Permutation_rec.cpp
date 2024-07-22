#include<iostream>
using namespace std;
void permutation(string s,int i,int n ){
    //base case
    if(i==n){
    cout<<s<<endl;
    }
    //to generate all the permutation q 
                                                                        
    for(int j=i;j<n;j++){
        swap(s[i],s[j]);
        permutation(s,i+1,n);
        swap(s[j],s[i]);
    }
 
}
        
int main()
{
    string s ="abc";
    int n = s.size();
    permutation(s,0,n);

  return 0;
}