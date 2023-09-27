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
    if(queue.front().second <= q){
      now += queue.front().second;
      cout << queue.front().first << " " << now << endl;
      queue.pop();
    }else{
      queue.push(make_pair(queue.front().first, queue.front().second-q));
      now += q;
      queue.pop();
    }
  }
	return 0;
}