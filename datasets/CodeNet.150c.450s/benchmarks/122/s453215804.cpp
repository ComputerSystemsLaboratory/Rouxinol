#include<iostream>
#include<queue>
using namespace std;
int main(){
  priority_queue<int> pq;

  string a;
  int b;
  
  cin >> a;
  while(a != "end"){
    if(a == "insert"){
      cin >> b;
      pq.push(b);
    }
    if(a == "extract"){
      cout << pq.top() << endl;
      pq.pop();
    }
    cin >> a;
  }

  return (0);
}