#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
  int n,q;
  cin >> n >> q;

  vector<string> name(n);
  vector<int> time(n);
  for(int i=0;i<n;i++) {
    cin >> name[i] >> time[i];
  }

  queue<int> que;
  for(int i=0;i<n;i++) {
    que.push(i);
  }

  int totalTime = 0;
  while( !que.empty() ) {
    int id = que.front(); que.pop();

    if(time[id] <= q) {
      totalTime += time[id];
      time[id] = 0;
      cout << name[id] << " " << totalTime << endl;
    } else {
      totalTime += q;
      time[id] -= q;
      que.push(id);
    }
  }

}