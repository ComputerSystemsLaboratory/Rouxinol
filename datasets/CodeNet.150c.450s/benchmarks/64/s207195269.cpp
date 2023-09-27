#define dbg(...) fprintf(stderr,__VA_ARGS__)
#define dpr(x) cerr<<#x<<": "<<x<<endl;
#define dprc(c) do{cerr<<#c<<":";for(auto&_i:(c)){cerr<<" "<<_i;}cerr<<endl;}while(0)
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
int INF = 1e9+7;
#define all(c) (c).begin(), (c).end()
#define tr(i,c) for(auto i=(c).begin();i!=(c).end();i++)
#define rtr(i,c) for(auto i=(c).rbegin();i!=(c).rend();i++)
#define rep(i,b) for(auto i=0;i<(b);i++)
#define pb push_back
#define sz(c) int((c).size())

int n, q, m;
vi A;

bool solve(int i, int sum) {
  if (sum == m) return true;
  if (i >= n || sum > m) return false;
  return solve(i+1, sum+A[i]) || solve(i+1, sum);
}

int main(int argc, char **argv)
{
  scanf("%d", &n);
  A = vi(n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }
  scanf("%d", &q);
  for (int i = 0; i < q; i++) {
    scanf("%d", &m);
    printf("%s\n", solve(0, 0) ? "yes" : "no");
  }
  return 0;
}