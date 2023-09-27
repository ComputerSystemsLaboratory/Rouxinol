#include<iostream>
#include<sstream>
#include<algorithm>
#include<climits>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<functional>
#include<map>
#include<string>
#include<cstring>
#include<vector>
#include<queue>
#include<stack>
#include<deque>
#include<set>
#include<list>
#include<numeric>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<long long, int> ll_i;
typedef pair<double, int> d_i;
typedef pair<long long, long long> ll_ll;
typedef pair<double, double> d_d;
typedef vector<int> vint;
typedef vector<char> vchar;

#define intmax 2000000014;
#define rep(i, n) for(i = 0;i < n;++i)
#define rep1(i, n) for(i = 1;i < n;++i)
#define rep2d(i, j, n) for(i = 0;i < n;++i)for(j = i + 1;j < n;++j)
#define per(i, n) for(i = n - 1;i > -1;--i)
#define int(x) int x; scanf("%d",&x)
#define int2(x, y) int x, y; scanf("%d%d",&x, &y)
#define int3(x, y, z) int x, y, z; scanf("%d%d%d",&x, &y, &z)
#define intn(n, a) rep(i, n)scanf("%d", &a[i]);
#define int2n(n, a, b) rep(i, n)scanf("%d%d", &a[i], &b[i]);
#define pfi(x) printf("%d\n", x)
#define pfii(x, y) printf("%d %d\n", x, y)
#define pfiii(x, y, z) printf("%d %d %d\n", x, y, z)
#define pfl(x) printf("%lld\n", x)
#define pfll(x, y) printf("%lld %lld\n", x, y)
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(),(a).end()
#define kabe puts("---------------------------");
#define debug(x) cout << " --- " << x << "\n"
#define debugi(x) printf(" --- %d\n", x)
#define debugii(x, y) printf(" --- %d %d\n", x, y)
#define debugin(i, n, a) rep(i, n)printf(" --- %d\n", a[i])
#define debugi2n(i, n, a, b) rep(i, n)printf(" --- %10d %10d\n", a[i], b[i])
#define debugiin(i, n, a) rep(i, n)printf(" --- %10d %10d\n", a[i].first, a[i].second)
#define debugl(x) printf(" --- %lld\n", x)

int i, j;
signed main(void){
  int(m);
  rep(i, m){
    string s;
    cin >> s;
    set<string> ss;
    rep1(j, s.size()){
      string a, b, ar, br;
      a = s.substr(0, j); ar = a; reverse(all(ar));
      b = s.substr(j); br = b; reverse(all(br));
      ss.insert(a + b); ss.insert(b + a);
      ss.insert(ar + b); ss.insert(b + ar);
      ss.insert(a + br); ss.insert(br + a);
      ss.insert(ar + br); ss.insert(br + ar);
    }
    cout << ss.size() << "\n";
  }

  return 0;
}