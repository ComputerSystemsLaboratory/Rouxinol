#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
  priority_queue<int> q;
  string cmd;
  while(cin>>cmd && cmd!= "end"){
    if(cmd == "insert"){
      int k;
      cin >> k;
      q.push(k);
    }else if(cmd == "extract"){
      int k = q.top();
      q.pop();
      cout << k << endl;
    }
  }
}