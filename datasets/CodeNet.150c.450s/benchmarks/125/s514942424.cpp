#include<bits/stdc++.h>
using namespace std;

void Main()
{
  set<int> visited;
  stack<int> s;
  int n; cin >> n;
  vector<int> stt(n+1), end(n+1), K(n+1);
  vector<vector<int> > A(n+1, vector<int>(n+1));
  for(int i = 0; i < n; i++) {
    int u; cin >> u;
    cin >> K[u];
    for (int j = 0; j < K[u]; j++) cin >> A[u][j];
  }
  s.push(1);
  int time = 1;
  bool popped = false;
  while (true) {
    //if (!popped) time++;
    //popped = false;
    if (s.size() == 0) {
      for (int i = 1; i <= n; i++) {
        if (visited.find(i) == visited.end()) {
          s.push(i);
          break;
        }
      }
      if (s.size() == 0) break;
      else {time++; continue;}
    }
    int cur = s.top();
    //cout << time << ' ' <<  cur << endl;
    if (visited.find(cur) == visited.end()) {
      visited.insert(cur);
      stt[cur] = time;
    }
    bool done = true;
    for(int i = 0; i < K[cur]; i++) {
      int nxt = A[cur][i];
      if (visited.find(nxt) == visited.end()) {
      	s.push(nxt);
        time++;
        done = false;
        break;
      }
    }
    if (done) {
      time++;
      end[cur] = time;
      s.pop();
      popped = true;
    }
  }
  for(int i = 0; i < n+1; i++) {
    if (i==0) continue;
    cout << i << ' ' << 
      stt[i] << ' ' << end[i] << endl;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}

