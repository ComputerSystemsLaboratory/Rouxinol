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
  int n,m;
  vector<string> u;
  string t;
  cin >> n;
  rep(i,n){cin >> t;u.eb(t);}
  cin >> m;
  bool s = true;
  rep(i,m){
    bool f=false;
    cin >> t;
    rep(i,n){
      if(t==u[i]){
        f=true;
      }
    }
    if(f){
      if(s) cout << "Opened by " << t << endl;
      else  cout << "Closed by " << t << endl;
      s ^= true;
    }else{
      cout << "Unknown " << t << endl;
    }
  }



  return 0;
}