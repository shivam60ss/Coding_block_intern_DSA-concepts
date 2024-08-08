#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;
        
int main()
{
 
  unordered_map<string,int> mymap;
    pair<string,int> p={"abc",101};
    pair<string,int> q = {"dfd",322};

    mymap.insert(p);
    mymap.insert(q);
    mymap.insert({"def",202});
  
  //unordered_map<string,int>::iterator it=my.begin();
  //it = my.begin();
  
  auto it = mymap.begin();
  cout<<"key: value"<<endl;
  for(auto it1 =it; it!=mymap.end();it1++){ 
    cout<<it1->first<<" "<<it1->second<<endl;

  }
  //=---------
  

  for(auto &it2:mymap){
    it2.second=100;

  }
  for(auto it2:mymap){
    //it2.second=100;
    cout<<it2.first<<" "<<it2.second<<endl;
  }

 
    
  return 0;
}