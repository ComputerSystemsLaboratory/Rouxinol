#include <stdio.h>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i=0; i<(int)(n); i++)

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int x[256], y[256];

int main() {
    for(;;) {
        int n;
        scanf("%d", &n);
        if(n==0) return 0;
        rep(i, n-1) {
            int k, d;
            scanf("%d%d", &k, &d);
            x[i+1] = x[k]+dx[d];
            y[i+1] = y[k]+dy[d];
        }
        const int w = *max_element(x, x+n)-*min_element(x, x+n);
        const int h = *max_element(y, y+n)-*min_element(y, y+n);
        printf("%d %d\n", w+1, h+1);
    }
}