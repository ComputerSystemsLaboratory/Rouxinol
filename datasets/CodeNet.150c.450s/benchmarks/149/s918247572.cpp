#include<iostream>
#include<sstream>
#include<algorithm>
#include<climits>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cfloat>
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

#define intmax 2000000014
#define longmax 2000000000000000014LL
#define mod 1000000007LL
#define rep(i, n) for(i = 0;i < n;++i)
#define rep1(i, n) for(i = 1;i < n;++i)
#define rep2d(i, j, n) for(i = 0;i < n;++i)for(j = i + 1;j < n;++j)
#define per(i, n) for(i = n - 1;i > -1;--i)
#define int(x) int x; scanf("%d",&x)
#define int2(x, y) int x, y; scanf("%d%d",&x, &y)
#define int3(x, y, z) int x, y, z; scanf("%d%d%d",&x, &y, &z)
#define intn(n, a) rep(i, n)scanf("%d", &a[i]);
#define int2n(n, a, b) rep(i, n)scanf("%d%d", &a[i], &b[i]);
#define sc(x) cin >> x
#define sc2(x, y) cin >> x >> y
#define scn(n, a) rep(i, n)cin >> a[i]
#define sc2n(n, a, b) rep(i, n)cin >> a[i] >> b[i]
#define pri(x) cout << x << "\n"
#define pri2(x, y) cout << x << " " << y << "\n"
#define pri3(x, y, z) cout << x << " " << y << " " << z << "\n"
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(),(a).end()
#define kabe puts("---------------------------")
#define kara puts("")
#define debug(x) cout << " --- " << x << "\n"
#define debug2(x, y) cout << " --- " << x << " " << y << "\n"
#define debug3(x, y, z) cout << " --- " << x << " " << y << " " << z << "\n"
#define debugn(i, n, a) rep(i, n)cout << " --- " << a[i] << "\n";
#define debugin(i, n, a) rep(i, n)printf(" --- %10d\n", a[i])
#define debugi2n(i, n, a, b) rep(i, n)printf(" --- %10d %10d\n", a[i], b[i])
#define debugiin(i, n, a) rep(i, n)printf(" --- %10d %10d\n", a[i].first, a[i].second)
#define X first
#define Y second
#define eps 0.0001
#define prid(x) printf("%.3lf\n", x)

struct unionfind{
	vint data;
	void use(int n){ data.assign(n, -1); }
	bool unionset(int x, int y){
		x = root(x); y = root(y);
		if(x != y){
			if(data[y] < data[x])swap(x, y);
			data[x] += data[y]; data[y] = x;
		}
		return x != y;
	}
	bool findset(int x, int y){ return root(x) == root(y); }
	int root(int x){ return (data[x] < 0) ? x : data[x] = root(data[x]); }
	int size(int x){ return -data[root(x)]; }
};

int i, j, tmp, tmp2;
signed main(void){
  for(int testcase = 1;;testcase++){
    int2(n, q);
    unionfind u; u.use(n);

    rep(i, q){
      int3(com, x, y);
      if(com)puts((u.findset(x, y)) ? "1" : "0");
      else u.unionset(x, y);
    }

//    pri(testcase);

/*/
//*/ break;
  }
  return 0;
}