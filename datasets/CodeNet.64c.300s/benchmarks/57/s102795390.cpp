#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int maxm = 12;
const int maxn = 10024;

int a[maxm][maxn];

int main() {
    int m, n;
    while(~scanf("%d%d", &m, &n) && (m || n)) {
        for(int i = 0; i < m; ++i)
            for(int j = 0; j < n; ++j) {
                scanf("%d", &a[i][j]);
            }
        int up = 1 << m;
        int ans = 0;
        for(int i = 0; i < up; ++i) {
            int temp = 0;
            //行变换
            for(int j = 0; j < m; ++j) {
                if(i & (1 << j)) {
                    for(int k = 0; k < n; ++k)
                        a[j][k] ^= 1;
                }
            }
            //列计数
            for(int j = 0; j < n; ++j) {
                int cnt = 0;
                for(int k = 0; k < m; ++k) {
                    if(a[k][j]) ++cnt;
                }
                temp += max(cnt, m - cnt);
            }
            //变回原数组
            for(int j = 0; j < m; ++j) {
                if(i & (1 << j)) {
                    for(int k = 0; k < n; ++k)
                        a[j][k] ^= 1;
                }
            }
            ans = max(ans, temp);
        }
        printf("%d\n", ans);
    }
    return 0;
}

