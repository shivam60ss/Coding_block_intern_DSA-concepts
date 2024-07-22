#include<bits/stdc++.h>
using namespace std;
        
        int power(int x,int n){
            int p=1;
            for(int i=0;i<n;i++){
                p=p*x;

            }
            return p;
        }

        //optimized code
        int findNthRoot(int n,int m){
            int lo=1,hi=m;
            while(lo<=hi){
                long mid=(lo+hi)/2;
                if(power(mid,n)==m){
                    return mid;

                }else if(power(mid,n)>m){
                    hi=mid-1;
                }else{
                    lo=mid+1;
                }
            }
            return -1;
        }
int main()
{
    int n,m;
    cin>>n>>m;
    //brute_force
    //x^n===m
    int ans;
    for(int x=1;x<=1e9;x++){
        if(power(x,n)==m){
            ans=x;
            break;
        }
    }
        cout<<ans<<endl;
        cout<<findNthRoot(n,m)<<endl;

  
}