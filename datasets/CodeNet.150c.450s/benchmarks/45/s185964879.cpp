#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> p_ll;
//typedef vector<pair<ll, ll>> vec_p; //vector<pair<ll, ll>> pairs(n) ,pairs.at(i) = make_pair(i*i, i)

#define ture ture
#define flase false
#define falg flag

#define REP(i, x) for (ll i = 0; i < (ll)(x); i++)
#define REPS(i, x) for (ll i = 1; i <= (ll)(x); i++)
#define RREP(i, x) for (ll i = ((ll)(x)-1); i >= 0; i--)
#define RREPS(i, x) for (ll i = ((ll)(x)); i > 0; i--)
#define all(x) (x).begin(), (x).end()

const ll MOD = pow(10, 9) + 7;
const ll LLINF = pow(2, 61) - 1; //llの最大9*10^18
const int INF = pow(2, 30) - 1;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

ll modpow(ll a, ll n, ll p)
{ //(a^n)mod p
  ll res = 1;
  while (n > 0)
  {
    if (n & 1)
      res = res * a % p;
    a = a * a % p;
    n >>= 1;
  }
  return res;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll N,M;
  string S;
  cin >> M>>N;

  cout << modpow(M, N, MOD) << endl;



}

