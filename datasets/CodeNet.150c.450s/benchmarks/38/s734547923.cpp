#include <bits/stdc++.h>

using namespace std;

#define LOG(...) fprintf(stderr, __VA_ARGS__)
//#define LOG(...)
#define FOR(i, a, b) for(int i=(int)(a); i<(int)(b); ++i)
#define REP(i, n) for(int i=0; i<(int)(n); ++i)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define EXIST(s, e) ((s).find(e)!=(s).end())
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))
#define SQ(n) (n) * (n)

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main() {
  vi tri(3);
  int n;
  cin >> n;
  REP(i, n){
    cin >> tri[0] >> tri[1] >> tri[2];
    SORT(tri);
    cout << (SQ(tri[0]) + SQ(tri[1])== SQ(tri[2]) ? "YES" : "NO") << endl;
  }
}