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



int memo[64][64];

int main(void){
  while(1){
    int n,p;
    int pl[64] = {0};
    int ans = -1;
    int bowl;
    cin >> n >> p;
    bowl = n;
    if(n+p==0)break;
    if(memo[n][p] == 0){
      bowl = p;
      rep(i,1000000){
        if(bowl){
          bowl--;
          pl[(i%n)]++;
          if(pl[i%n] == p){ans = i%n;break;}
        }else{
          bowl = pl[i%n];
          pl[i%n] = 0;
        }
      }
      cout << ans << endl;
      memo[n][p] = ans;
    }else{
      cout << memo[n][p] << endl;
    }
  }
  return 0;
}