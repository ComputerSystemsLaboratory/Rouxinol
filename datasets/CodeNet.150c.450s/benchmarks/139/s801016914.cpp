#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define rep(i,n) for(int i=0; i<(int)(n); i++)

typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> e[n];
  rep(i,m) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    e[a].push_back(b);
    e[b].push_back(a);
  }
  
  int s[n];
  rep(i,n) s[i] = -1;
  s[0] = 0;
  queue<int> q;
  q.push(0);
  while(! q.empty()) {
    int i = q.front();
    q.pop();
    for(int j : e[i]) {
      if(s[j] == -1) {
        s[j] = i;
        q.push(j);
      }
    }
  }
  
  cout << "Yes" << endl;
  rep(i,n-1) cout << s[i+1]+1 << endl;
  return 0;
}