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

bool primep(int n) {
  if (n == 1) return false;
  if (n == 2) return true;
  if ((n & 1) == 0) return false;
  int rt = sqrt(n)+1;
  for (int i = 3; i < rt; i += 2) {
    if ((n % i) == 0) return false;
  }
  return true;
}

int main(int argc, char **argv)
{
  int n, res = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (primep(x)) res++;
  }
  cout << res << endl;
  return 0;
}