#include <bits/stdc++.h>
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define pb push_back
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(i, n) FOR(i, 0, n)
#define ll long long
using namespace std;

const ll P = 1000000007;
const long long INF = 1LL << 60;
int gcd(int a, int b) { return b != 0 ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }

int main()
{
  cout << fixed << setprecision(10);
  ll D;
  cin >> D;
  vector<ll> c(26);
  rep(i,26) cin >> c[i];
  vector<vector<ll>> s(D,vector<ll>(26));
  rep(i,D)
  {
    rep(j,26)
    {
      cin >> s[i][j];
    }
  }
  vector<int> t(D);
  vector<int> lastday(26);
  rep(i,26) lastday[i] = -1;
  rep(i,D) 
  {
    cin >> t[i];
    t[i] --;
  }
  ll satisfy = 0;
  rep(i,D)
  {
    ll dissatisfy = 0;
    satisfy += s[i][t[i]];
    lastday[t[i]] = i;
    rep(j,26)
    {
      dissatisfy += c[j] * (i-lastday[j]);
    }
    satisfy -= dissatisfy;
    cout << satisfy << endl;
  }
  return 0;
}
