#include <algorithm>
#include <cstdio>
#include <climits>
#include <vector>
using namespace std;

int main() {
    while(true) {
        int n,k; scanf("%d%d", &n, &k);
        if(n==0) break;
        static int a[100001];
        a[0] = 0;
        for(int i = 0; i < n; i++) {
            int x; scanf("%d", &x);
            a[i+1] = a[i] + x;
        }
        int max_sum = INT_MIN;
        for(int i = k; i <= n; i++) {
            max_sum = max(max_sum, a[i]-a[i-k]);
        }
        printf("%d\n", max_sum);
    }
    return 0;
}