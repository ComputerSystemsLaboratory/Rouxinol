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


bool search_rec(vi& array, int left, int right, int x) {
  if (right < left || left < 0 || right >= sz(array)) return false;
  int m = (left + right) / 2;

  if (array[m] < x) return search_rec(array, m+1, right, x);
  else if (x < array[m]) return search_rec(array, left, m-1, x);
  else return true; // array[m] == x
}

bool search(vi& array, int x) {
  return search_rec(array, 0, sz(array) - 1, x);
}

int main(int argc, char **argv)
{
  int n, q;
  cin >> n;
  vi S(n);
  for (int i = 0; i < n; i++) {
    cin >> S[i];
  }
  sort(all(S));
  cin >> q;
  int C = 0;
  for (int i = 0; i < q; i++) {
    int x;
    cin >> x;
    if (search(S, x)) C++;
  }
  cout << C << endl;

  return 0;
}