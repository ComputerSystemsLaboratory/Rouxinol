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

int cday[1024][16][32];

int main(void){
  int n, y, m, d;
  int cnt = 0;
  reps(i,1,1000){
    reps(j,1,10){
      reps(k,1,20){
        if(i%3 != 0 && j%2 == 0 && k > 19)break;
        cday[i][j][k] = ++cnt;
      }
    }
  }
  cin >> n;
  rep(l,n){
    cin >> y >> m >> d;
    cout << cday[1000][1][1] - cday[y][m][d] << endl;
  }

  return 0;
}