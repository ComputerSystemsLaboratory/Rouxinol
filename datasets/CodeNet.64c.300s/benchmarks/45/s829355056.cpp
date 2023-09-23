#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<queue>
#include<stack>
#include<map>
#include<set>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<pii,int> piii;
typedef pair<ll,ll> pll;

#define reps(i,f,n) for(int i = int(f); i <= int(n); i++)
#define rep(i,n) reps(i,0,int(n)-1)
#define rrep(i,n) for(int i = n-1; i >= 0; i--)

#define all(x) (x).begin(),(x).end()
#define X first
#define Y second

#define sz size()
#define eb emplace_back


int main(void){
  int n, m, p;
  while(cin >> n >> m >> p, n+m+p){
    int sum = 0;
    int x[128];
    m--;
    rep(i,n){
      cin >> x[i];
      sum += x[i];
    }
    sum*=(100-p);
    if( x[m] == 0){
      cout << 0 << endl;
    }else{
      cout << sum/x[m] << endl;
    }
  }
  return 0;
}