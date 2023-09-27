#include <iostream>
#include <queue>
using namespace std;
int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
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
      queue.push(make_pair(que.first, que.second-q));
      now += q;
    }
  }
	return 0;
}