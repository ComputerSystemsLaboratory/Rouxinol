#include <queue>
#include <iostream>
using namespace std;

int main(){
  priority_queue<int> Q;
  string n;
  while(cin >> n && n != "end"){
    if(n == "insert"){
      int a;
      cin >> a;
      Q.push(a);
    }
    if(n == "extract"){
      int m = Q.top();
      Q.pop();
      cout << m << endl;
    }  
  }
}