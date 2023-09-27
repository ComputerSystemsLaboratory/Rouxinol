#include <bits/stdc++.h>
 using namespace std;

int main(){
  int N,M,i;
  cin >> N >> M;
  vector<vector<int>> c(N+1);
  vector<int> p(N+1,-1);
  vector<int> d(N+1,-1);
  int a,b;
  for(int i=0;i<M;i++){
    cin >> a >> b;
    c[a].push_back(b);
    c[b].push_back(a);
  }
  p[1] = 1;
  queue<int> que;
  que.push(1);
  //cout << "q:" << que.front() << endl;
  
  while(!que.empty()){
    i = que.front();
    que.pop();
    for(auto n:c[i])
      if (p[n] == -1){
        que.push(n);
        //cout << "n:" << n << endl;
        p[n] = p[i]+1;
        d[n] = i;
      }
  }
  for(i=2;i<=N;i++)
    if(d[i] == -1){
      cout << "No" << endl;
      return 0;
    }
  cout << "Yes" << endl;
  for(i=2;i<=N;i++)
    cout << d[i] << endl;

  return 0;
}
