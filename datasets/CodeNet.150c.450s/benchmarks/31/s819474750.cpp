#define dbg(...) fprintf(stderr,__VA_ARGS__)
#define dpr(x) cerr<<#x<<": "<<x<<endl;
#define dprc(c) do{cerr<<#c<<":";for(auto&_i:(c)){cerr<<" "<<_i;}cerr<<endl;}while(0)
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
int INF = 1e9+7;
#define all(c) begin(c), end(c)
#define tr(i,c) for(auto i=begin(c);i!=end(c);i++)
#define rtr(i,c) for(auto i=(c).rbegin();i!=(c).rend();i++)
#define rep(i,b) for(auto i=0;i<(b);i++)
#define pb push_back
#define sz(c) int((c).size())

int n;
vi R;

int main(int argc, char **argv)
{
  int n, minv, maxd;
  cin >> n;
  cin >> minv;
  maxd = -INF;
  for (int i = 1; i < n; i++) {
    int r;
    cin >> r;
    if (r - minv > maxd) maxd = r - minv;
    if (r < minv) minv = r;
  }
  cout << maxd << endl;
  return 0;
}