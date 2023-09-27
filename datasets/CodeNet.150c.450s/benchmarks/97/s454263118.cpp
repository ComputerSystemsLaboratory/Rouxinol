#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <functional>

using namespace std;

#define rep(i,n) for((i)=0;(i)<(int)(n);(i)++)
#define foreach(itr,c) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
template<class T> void pp(T a, T b){ for(T i = a; i != b; ++i) cout << *i << ' '; cout << endl; }

int N;
int mp[410][410];
const int xx = 205, yy = 205;

int main(){
  int t,i,j;

  while(1){
    scanf("%d",&N);
    if(N == 0) break;
    rep(i,410) rep(j,410) mp[i][j] = -1;

    mp[xx][yy] = 0;
    rep(t,N-1){
      int n,d;
      scanf("%d %d",&n,&d);
      rep(i,410) rep(j,410) if(mp[i][j] == n){
        if(d == 0) mp[i][j-1] = t+1;
        if(d == 1) mp[i+1][j] = t+1;
        if(d == 2) mp[i][j+1] = t+1;
        if(d == 3) mp[i-1][j] = t+1;
      }
    }

    int imn,imx,jmn,jmx;
    imn = imx = jmn = jmx = xx;
    rep(i,410) rep(j,410){
      if(mp[i][j] != -1){
        imn = min(imn,i);
        imx = max(imx,i);
        jmn = min(jmn,j);
        jmx = max(jmx,j);
      }
    }

    printf("%d %d\n",abs(jmn - jmx) + 1, abs(imn - imx) + 1);
  }

  return 0;
}