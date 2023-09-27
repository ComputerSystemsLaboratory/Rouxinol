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
#define pb(a) push_back(a)
#define pf(a) push_front(a)
#define MP make_pair
#define SV(n,v) {int tmp;for(int i=0;i<n;++i){scanf("%d", &tmp);v.push_back(tmp);}}
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

using namespace std;

typedef pair<int,int> pii;

int main(){

  while(true){
    int a, b;
    cin >> a >> b;
    if(a == 0 && b == 0) break;
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    REP(i,n){
      cin >> x[i] >> y[i];
    }

    llong dp[20][20] = {};
    dp[1][1] = 1;
    for(int i = 1; i <= 16; ++i){
      for(int j = 1; j <= 16; ++j){
        bool is_const = false;
        for(int k = 0; k < n; ++k){
          if(i+1 == x[k] && j == y[k]){
            is_const = true;
            break;
          }
        }
        if(!is_const)
          dp[i+1][j] += dp[i][j];

        is_const = false;
         for(int k = 0; k < n; ++k){
          if(i == x[k] && j+1 == y[k]){
            is_const = true;
            break;
          }
        }
        if(!is_const)
          dp[i][j+1] += dp[i][j];
      }
    }

    cout << dp[a][b] << endl;
  }

  return 0;
}


