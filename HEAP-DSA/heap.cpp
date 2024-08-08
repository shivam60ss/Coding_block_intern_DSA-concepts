#include<bits/stdc++.h>
using namespace std;
        
int main()
{
    //max heap /max priority queue
    //declaretion
    cout<<"max heap"<<endl;
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(15);
    pq.push(30);

    cout<<pq.top()<<endl;
    // while(!pq.empty()){
    //     cout<<pq.top()<<endl;
    //     pq.pop();

    // }

    pq.pop();
    cout<<pq.top()<<endl;

    //min priority queue/ min heap
    cout<<"min heap"<<endl;
    priority_queue<int,vector<int>,greater<int>> minPq;
    minPq.push(10);
    minPq.push(20);
    minPq.push(15);

    cout<<minPq.top()<<endl;
    minPq.pop();
    cout<<minPq.top()<<endl;
    
  return 0;
} 