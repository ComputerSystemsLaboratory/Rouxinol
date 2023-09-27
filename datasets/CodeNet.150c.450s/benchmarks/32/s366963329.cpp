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
#include<bitset>
#include<list>
#include<numeric>
#include<complex>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<long long, int> ll_i;
typedef pair<double, int> d_i;
typedef pair<long long, long long> ll_ll;
typedef pair<double, double> d_d;
typedef vector<int> Vint;

#define PI 3.141592653589793238462643383279
#define mod 1000000007LL
#define rep(i, n) for(i = 0;i < n;++i)
#define rep1(i, n) for(i = 1;i < n;++i)
#define rep2d(i, j, n) for(i = 0;i < n;++i)for(j = i + 1;j < n;++j)
#define per(i, n) for(i = n - 1;i > -1;--i)
#define int(x) int x; scanf("%d",&x)
#define int2(x, y) int x, y; scanf("%d%d",&x, &y)
#define int3(x, y, z) int x, y, z; scanf("%d%d%d",&x, &y, &z)
#define int4(v, x, y, z) int v, x, y, z; scanf("%d%d%d%d", &v, &x, &y, &z)
#define int5(v, w, x, y, z) int v, w, x, y, z; scanf("%d%d%d%d%d", &v, &w, &x, &y, &z)
#define scn(n, a) rep(i, n)cin >> a[i]
#define sc2n(n, a, b) rep(i, n)cin >> a[i] >> b[i]
#define pri(x) cout << x << "\n"
#define pri2(x, y) cout << x << " " << y << "\n"
#define pri3(x, y, z) cout << x << " " << y << " " << z << "\n"
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(),(a).end()
#define endl "\n"
#define kabe puts("---------------------------")
#define kara puts("")
#define debug(x) cout << " --- " << x << "\n"
#define debug2(x, y) cout << " --- " << x << " " << y << "\n"
#define debug3(x, y, z) cout << " --- " << x << " " << y << " " << z << "\n"
#define X first
#define Y second
#define eps 0.0001
#define prid(x) printf("%.15lf\n", x)


signed main(void){
  int i, j, k;
  for(int testcase = 0;testcase >= 0;testcase++){
    int3(m, nin, nax); if(!(m|nax|nin))break;
    int p[m]; scn(m, p);

    int res = 0, resi;
    nin--; nax--;
    for(i = nin;i <= nax;++i){
      if(res <= p[i] - p[i + 1]){ res = p[i] - p[i + 1]; resi = i + 1; }
    }
    pri(resi);


//*/

//*/ break;
  }
  return 0;
}