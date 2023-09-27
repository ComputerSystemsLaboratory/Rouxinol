#include <iostream>
#include <algorithm>
using namespace std;

#define repeat(i,n) for (int i = 0; i < n; ++i)
#define repeat_rev(i,n) for (int i = n-1; 0 <= i; --i)

#define MAX_N 100
#define MAX_v 1000
#define MAX_w 1000
#define MAX_W 10000
int N, W;
typedef struct { int v, w; } item;
item t[MAX_N];
int dp[2][MAX_W+1];

int main() {
    cin >> N >> W;
    repeat (i,N) cin >> t[i].v >> t[i].w;
    int *cur = dp[0]; fill(cur,cur+W,0);
    int *prv = dp[1];
    repeat (i,N) {
        swap(cur,prv);
        repeat (w,W+1) {
            int a = w - t[i].w;
            cur[w] = max(prv[w], (0 <= a ? prv[a] + t[i].v : 0));
        }
    }
    repeat_rev (w,W+1) if (cur[w]) {
        cout << cur[w] << endl;
        break;
    }
    return 0;
}