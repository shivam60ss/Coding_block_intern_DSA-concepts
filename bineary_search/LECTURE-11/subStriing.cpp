
#include<bits/stdc++.h>

using namespace std;
        
int main()
{
    char s[100]="abcd";
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<s[k];
            }
            cout<<endl;
        }
    }
  return 0;
}