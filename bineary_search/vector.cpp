#include<iostream>
#include<vector>
using namespace std;
        
int main()
{
    //decleare vector
    vector<int> nums;
    // for(int i=10;i<=15;i++)
    // {
    //     nums.push_back(i);
    //     cout<<"Size : " << nums.size()<<" capi: "<< nums.capacity()<<endl;
    //     cout<<nums.back()<<endl; 
        
    // }
    
     for(int i=0;nums.size();i++)
     {
        cin>>nums[i];
     }

    for(int i=0;nums.size();i++)
    {
        cout<<nums[i]<< " ";
    }


  return 0;
}