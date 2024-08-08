#include<iostream>
using namespace std;
        
int main()
{
    pair<int,int> p1;
    //assignment
    p1 = {1000,2000};

    cout<<p1.first<<" "<<p1.second<<endl;

    pair<string,int> p2 = {"abd",34};
    
  return 0;
}