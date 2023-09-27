#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  deque<int> deq;
  int N; cin >> N;

  while(N--){
    string cmd; cin >> cmd;
    if(cmd == "insert"){
      int x; cin >> x;
      deq.push_front(x);
    }
    else if(cmd == "delete"){
      int x; cin >> x;
      auto it = find(deq.begin(), deq.end(), x);
      if(it != deq.end())
	deq.erase(it);
    }
    if(cmd == "deleteFirst")
      deq.pop_front();
    if(cmd == "deleteLast")
      deq.pop_back();
  }

  if(!deq.empty()){
    cout << deq.front();
    for(auto it=deq.begin()+1;it!=deq.end();++it)
      cout << " " << *it;
    cout << endl;
  }

  return 0;
}