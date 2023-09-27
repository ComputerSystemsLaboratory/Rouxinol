#include <bits/stdc++.h>
using namespace std;


int main(){
  priority_queue<int>PQ;
  string order;
  int num;
  
  while(1){
    cin>>order;
    if(order=="end"){
      return 0;
    }
    if(order=="insert"){
      cin>>num;
      PQ.push(num);
    }
    else {
      cout<<PQ.top()<<endl;
      PQ.pop();
    }
  }
  return 0;
 }
 

