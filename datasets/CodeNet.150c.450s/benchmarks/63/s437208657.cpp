#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<queue>
using namespace std;
int inf = 1000000000;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

struct Dist{
  int to, from, dist;
};

int main(){
  int n, m, r;
  cin >> n >> m >> r;
  vector<int> v(n, inf);
  vector<Dist> c(m);
  for(int i=0; i<m; i++){
    int s, t, d;
    cin >> s >> t >> d;
    c[i].to = t; c[i].from = s; c[i].dist = d;
  }

  v[r] = 0;

  while( true ){
    bool f = false;
    for(int i=0; i<c.size(); i++){
      Dist d = c[i];
      if( v[d.from] != inf && v[d.to] > v[d.from] + d.dist ){
        v[d.to] = v[d.from] + d.dist;
        f = true;
      }
    }
    if( !f ) break;

  }

  for(int i=0; i<n; i++){
    if( v[i] == inf ) cout << "INF" << endl;
    else cout << v[i] << endl;
  }

  return 0;
}





// EOF