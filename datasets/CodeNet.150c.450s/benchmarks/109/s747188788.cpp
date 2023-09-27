#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define repr(i,n) for(int i=(int)(n-1);i>=0;i--)
#define rep(i,n) repl(i,0,n)
#define each(itr,v) for(auto itr:v)
#define pb(s) push_back(s)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout << #x" = " << x << endl
#define print(x) cout << x << endl
#define maxch(x,y) x=max(x,y)
#define minch(x,y) x=min(x,y)
#define uni(x) x.erase(unique(all(x)),x.end())
#define exist(x,y) (find(all(x),y)!=x.end())
#define bcnt(x) bitset<32>(x).count()

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> PPI;
typedef pair<int, P> PIP;
typedef pair<ll, ll> PL;
typedef pair<P, ll> PPL;
typedef set<int> S;

#define INF INT_MAX/3
#define MAX_N 1000000001


int main(){
  cin.sync_with_stdio(false);
  int n;
  while(cin >> n, n) {
    string s;
    int time[24 * 3600] = {};
    rep(i, n) {
      cin >> s;
      time[stoi(s.substr(0, 2)) * 3600 + stoi(s.substr(3, 2)) * 60 + stoi(s.substr(6, 2))]++;
      cin >> s;
      time[stoi(s.substr(0, 2)) * 3600 + stoi(s.substr(3, 2)) * 60 + stoi(s.substr(6, 2))]--;
    }
    int maxi = 0, tmp = 0;
    rep(i, 24 * 3600) {
      tmp += time[i];
      maxch(maxi, tmp);
    }
    cout << maxi << endl;
  }

  return 0;
}