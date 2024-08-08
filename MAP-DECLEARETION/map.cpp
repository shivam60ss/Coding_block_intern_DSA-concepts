#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    //declearation
//unordered _map<key_datatype ,value_datatype> namesofmap

    unordered_map<string,int> mymap;
    pair<string,int> p={"abc",101};
    //insert(pair)
    mymap.insert(p);
    //insert(key-value)
    mymap.insert({"def",202});
    //[]->squre breket
    mymap["one"]=1;
    mymap["two"];

    //how to acess
    //.at(key)
    //int value=mumap.at(:abc)

    //cout<<value<<endl;
    cout<<mymap.at("abc")<<endl;
    //[key]-> sqaure bracket

    cout<<mymap["abc"]<<endl;
    //cout<<mymap.at("vss")<<endl;
    cout<<mymap["uvs"]<<endl;

    //count(key)-> true/false
    cout<<mymap.count("abc")<<endl;
    cout<<mymap.count("uvs")<<endl;
    //find(key)->iterator
    auto it=mymap.find("abc");
    cout<<it->first<<endl;
    cout<<it->second<<endl;
    //erase(key) 
    cout<<"//erase"<<endl;
    mymap.erase("abc");
    cout<<mymap.count("abc")<<endl;
    //clear()
    mymap.clear();
    cout<<mymap.count("abc")<<endl;


return 0;



}

