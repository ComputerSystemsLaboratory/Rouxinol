#include <cstdio>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <iterator>
#include <cassert>
#include <numeric>
#include <functional>
#pragma warning(disable:4996) 

typedef long long ll;
typedef unsigned long long ull;
#define MIN(a, b) ((a)>(b)? (b): (a))
#define MAX(a, b) ((a)<(b)? (b): (a))
#define LINF  9223300000000000000
#define LINF2 1223300000000000000
#define LINF3 1000000000000
#define INF 2140000000
const long long MOD = 1000000007;
//const long long MOD = 998244353;

using namespace std;

int D;
int c[26];
vector<int> s;


void input()
{
    scanf("%d", &D);
    s.resize(D * 26);
    int i, j;
    for (i = 0; i < 26; i++) {
        scanf("%d", &c[i]);
    }
#define P(i,j) ((i)*26+(j))
    for (i = 0; i < D; i++) {
        for (j = 0; j < 26; j++) {
            scanf("%d", &s[P(i, j)]);
        }
    }
    return;
}

void calc(const vector<int>& t, vector<int>& ans)
{
    vector<int> last(26,-1);
    int sum = 0;
    int i,k;
    for (i = 0; i < D; i++) {
        sum += s[P(i, t[i])];
        last[t[i]] = i;
        for (k = 0; k < 26; k++) {
            sum -= c[k] * (i - last[k]);
        }
        ans[i] = sum;
    }

    return;
}

void solve()
{
    input();

    vector<int> t(D);
    int i;
    for (i = 0; i < D; i++) {
        scanf("%d", &t[i]); t[i]--;
    }
    
    vector<int> ans0(D);
    calc(t, ans0);

    for (i = 0; i < D; i++) {
        printf("%d\n", ans0[i]);
    }

    return;
}


int main(int argc, char* argv[])
{
#if 1
    solve();
#else
    int T;
    scanf("%d", &T);
    int t;
    for(t=0; t<T; t++) {
        //printf("Case #%d: ", t+1);
        solve();
    }
#endif
    return 0;
}
