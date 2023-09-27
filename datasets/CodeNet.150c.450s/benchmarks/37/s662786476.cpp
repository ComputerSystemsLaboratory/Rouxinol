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
  int a, b, c, d, e, f;
  while(cin >> a >> b >> e >> c >> d >> f) {
    float D = 100.0f / (a * d - b * c);
    int x = round((d * e - b * f) * D);
    int y = round((-c * e + a * f) * D);
    printf("%.3f %.3f\n", x / 100.0f, y / 100.0f);
  }
}