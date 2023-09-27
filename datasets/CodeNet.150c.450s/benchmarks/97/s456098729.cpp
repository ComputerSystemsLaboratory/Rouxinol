#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
int dx[] = {0,1,0,-1};
int dy[] = {-1,0,1,0};
int main(){
  int N,n,d;
  while(cin >> N , N){
    P p[201];
    int ax=0,ay=0,ix=0,iy=0;
    p[0] = P(0,0);
    for(int i=1;i<N;i++){
      cin >> n >> d;
      p[i] = P(p[n].first+dx[d],p[n].second+dy[d]);
      ax = max(ax,p[i].first);
      ay = max(ay,p[i].second);
      ix = min(ix,p[i].first);
      iy = min(iy,p[i].second);
    }
    cout << ay - iy + 1 << " " << ax - ix + 1 << endl;
  }
}