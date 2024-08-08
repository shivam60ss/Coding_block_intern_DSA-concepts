//count the frequency of each number

#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
using namespace std;
        
int main()
{
    int arr[]={1,2,1,2,3,4,4};
    unordered_map<int,int> freq;
    for(int i=0;i<7;i++){
        freq[arr[i]]++;

    }
    for(auto it=freq.begin();it!=freq.end();it++){
            cout<<it->first<<":"<<it->second<<endl;
    

    }

    //----------------------
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    map<int,int> mymap;
    for(int i=0;i<n;i++){
        mymap[a[i]]++;
        }
    for(auto it:mymap){
        cout<<it.first<<":"<<it.second<<endl;
    }    
  return 0;
}