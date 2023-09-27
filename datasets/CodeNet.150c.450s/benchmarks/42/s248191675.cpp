#include <iostream>
#include <queue>
using namespace std;
int main(){
  int n, q;
  cin >> n >> q;
  queue<pair<string, int> > queue;
  for(int i=0;i < n;i++){
    string name; int time;
    cin >> name >> time;
    queue.push(make_pair(name,time));
  }
  int now = 0;
  while(!queue.empty()){
    pair<string, int> que = queue.front(); queue.pop();
    if(que.second <= q){
      now += que.second;
      cout << que.first << " " << now << endl;
    }else{
      que.second -= q;
      queue.push(que);
      now += q;
    }
  }
	return 0;
}