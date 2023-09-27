#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>

#define REP(i,n) for(int i=0;i<n;++i)
#define REPR(i,n) for(int i=n;i>=0;--i)
#define REPI(itr,v) for(auto itr=v.begin();itr!=v.end();++itr)
#define REPIR(itr,v) for(auto itr=v.rbegin();itr!=v.rend();++itr)
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define SORT(v,n) sort(v, v+n)
#define SORTV(v) sort(v.begin(), v.end())
#define ALL(v) v.begin(),v.end()
#define llong long long
#define INF 999999999
#define SUR 1000000007
#define pb push_back
#define pf push_front
#define MP make_pair

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

using namespace std;

typedef pair<int,int> pii;

int main(){

  while(true){
    int n;
    scanf("%d", &n);

    if(n == 0){
      break;
    }

    vector<pii> v(n);

    v[0] = MP(0, 0);
    REP(i,n-1){
      int a, b;
      scanf("%d %d", &a, &b);
      v[i+1] = MP(v[a].first + dx[b], v[a].second + dy[b]); 
    }

    int max_x = -INF, min_x = INF, min_y = INF, max_y = -INF;
    REP(i,n){
      int x = v[i].first, y = v[i].second;
      max_x = max(max_x, x);
      min_x = min(min_x, x);
      max_y = max(max_y, y);
      min_y = min(min_y, y);
    }

    printf("%d %d\n", max_x - min_x + 1, max_y - min_y + 1);
  
  }
  return 0;
}


