#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  string com;
  int v;
  priority_queue<ll> pq;
  while(true){
    cin >> com;
    if(com == "insert"){
      cin >> v;
      pq.push(v);
    }else if(com == "extract"){
      cout << pq.top() << endl;
      pq.pop();
    }else{
      break;
    }
  }
}
