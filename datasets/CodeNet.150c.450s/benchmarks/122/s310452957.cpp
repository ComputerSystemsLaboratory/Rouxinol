#include <queue>
#include <iostream>
#define ll long long
using namespace std;

int main(){
  string s;
  priority_queue<ll> pq;
  while(cin >> s){
    if(s == "insert"){
      ll input;
      cin >> input;
      pq.push(input);
    }else if(s == "extract"){
      cout << pq.top() << '\n';
      pq.pop();
    }else{
      return 0;
    }
  } 
}