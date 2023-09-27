#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
  int N,M,i,a,b;
  cin>>N>>M;
  vector<vector<int> > E(N+1, vector<int>());
  for (i=0;i<M;i++) {
    cin>>a>>b;
    E[a].push_back(b);
    E[b].push_back(a);
  }
  vector<int> ans(N+1, -1);
  queue<int> R;
  ans[0]=ans[1]=0;
  R.push(1);
  while(!R.empty()) {
    int room = R.front();
    R.pop();
    for(i=0;i<E[room].size();i++) {
      if (ans[E[room][i]] < 1) {
        ans[E[room][i]] = room;
        R.push(E[room][i]);
      }
    }
  }
  for(i=2;i<=N;i++) {
    if (ans[i] < 1) break;
  }
  if (i<=N) {
    cout<<"No"<<endl;
  } else {
    cout<<"Yes"<<endl;
    for(i=2;i<=N;i++) {
      cout<<ans[i]<<endl;
    }
  }
  return 0;
}
