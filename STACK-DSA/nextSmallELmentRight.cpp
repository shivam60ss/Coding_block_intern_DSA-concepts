#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void NSR(vector<int>& a,int n){
    vector<int> ans(n);
    stack<int> s;
    s.push(n-1);
    //s.push(a[n-1]);
    ans[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        while(!s.empty() && a[s.top()]>=a[i]){
            s.pop();

        }
        ans[i]=s.empty()? -1:a[s.top()];
        s.push(i);
    }
    for(int i = 0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


}
using namespace std;
        
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);  
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    NSR(a,n);


  return 0;
}