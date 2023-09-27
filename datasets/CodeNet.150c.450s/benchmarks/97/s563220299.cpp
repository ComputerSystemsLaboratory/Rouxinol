#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

const int MAX_N = 201;
const int dx[] = {-1,0,1,0};
const int dy[] = {0,1,0,-1};
int N;
int n[MAX_N], d[MAX_N];
int x[MAX_N], y[MAX_N];

int main() {
  while(cin >> N && N) {
    vector<pair<int,int> > Q;
    for(int i = 1; i < N; ++i) {
      cin >> n[i] >> d[i];
      Q.push_back(make_pair(n[i],i));
    }
    sort(Q.begin(),Q.end());
    x[0] = y[0] = 0;
    int sx,sy,ex,ey;
    sx=sy=0;
    ex=ey=1;
    for(int i = 0; i < Q.size(); ++i) {
      int p = Q[i].second;
      x[p] = x[n[p]] + dx[d[p]];
      y[p] = y[n[p]] + dy[d[p]];
      sx = min(sx,x[p]);
      sy = min(sy,y[p]);
      ex = max(ex,x[p]+1);
      ey = max(ey,y[p]+1);
    }
    cout << ex-sx << " " << ey-sy << endl;
  }
  return 0;
}