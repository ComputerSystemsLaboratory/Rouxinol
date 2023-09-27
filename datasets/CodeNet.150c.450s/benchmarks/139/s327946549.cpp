#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using VI = vector<int>;
using VVI = vector<VI>;
using VLL = vector<LL>;
using VVLL = vector<VLL>;
using VS = vector<string>;
using PII = pair<int,int>;
using VP = vector<PII>;
using VB = vector<bool>;
using VVB = vector<VB>;
#define REP(i,m,n) for(int i=(m);i<(n);i++)
	//i=m -> n-1(昇順)
#define RREP(i,m,n) for(int i=(m);i>=(n);i--)
	//i=m -> n(降順)

int main(){
  int n,m;
  cin >> n >> m;
  VI a(m),b(m),sign(n+1,-1);
  VVI g(n+1, VI());
  REP(i,0,m){
    cin >> a[i] >> b[i];
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }
  
  queue<PII> q; // x = 現在地, y = 道標
  q.push(make_pair(1,0));
  
  while(!q.empty()){
    PII cur = q.front();
    q.pop();
    int x = cur.first;
    int y = cur.second;
    
    for(int z : g[x]){
      if(sign[z] == -1){
        q.push(make_pair(z,x));
        sign[z] = x;
      }
    }
  }
  
  cout << "Yes" << endl;
  REP(i,2,n+1){
    cout << sign[i] << endl;
  }
  
  
  return 0;
}
