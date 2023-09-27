#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>

#define rep(i,j) REP((i), 0, (j))
#define REP(i,j,k) for(int i=(j);(i)<(k);++i)
#define between(a,x,b) ((a)<=(x)&&(x)<=(b))
using namespace std;

vector<pair<int, pair<int, int> > >p(20000); // taikaku h w

int main(){
  int c = 0;
  REP(i, 1, 200) REP(j, i+1, 200) p[c++] = make_pair(i*i+j*j, make_pair(i, j));

  sort(p.begin(), p.end());

  //  rep(i, 25) printf("%d %d %d\n", p[i].first, p[i].second.first, p[i].second.second);
  int w, h;
  while(scanf("%d%d", &h, &w) && w+h){
    rep(i, p.size()){
      //      if(w * w + h * h < p[i].first && (h != p[i].second.first || w != p[i].second.second)){
      if(p[i].second.first == h && p[i].second.second == w){
	printf("%d %d\n", p[i+1].second.first, p[i+1].second.second);
	break;
      }
    }
  }
  return 0;
}