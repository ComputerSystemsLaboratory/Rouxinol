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
  int n;

  while(cin >> n,n){
    string s;
    bool d = true;
    bool r = true;
    bool l = true;
    int ans = 0;

    rep(i,n){
      cin >> s;
      if(s == "lu"){
        l = false;
      }else if(s == "ld"){
        l = true;
      }else if(s == "ru"){
        r = false;
      }else if(s == "rd"){
        r = true;
      }
      if(r == l && r != d){
        d = !d;
        ans++;
      }
    }
    cout << ans << endl;
  }

  return 0;
}