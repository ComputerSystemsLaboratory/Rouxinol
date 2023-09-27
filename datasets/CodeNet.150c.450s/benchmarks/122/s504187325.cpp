#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){
  priority_queue<int> PQ;
  while(1){
    string str;
    cin >> str;
    if(str=="insert"){
      int x; cin >> x;
      PQ.push(x);
    }else if(str=="extract"){
      cout << PQ.top() << endl;
      PQ.pop();
    }else if(str=="end"){
      break;
    }
  }
}