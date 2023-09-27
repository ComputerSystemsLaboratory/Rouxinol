#include <cstdio>
using namespace std;

int main(void)
{
    int n;
    int ans1, ans2;
    while(1) {
        scanf("%d", &n);
        if(n == 0) break;
        ans1 = ans2 = 0;
        for(int i=0; i<n; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            if(a > b) {
                ans1 += a + b;
            } else if(a < b) {
                ans2 += a + b;
            } else {
                ans1 += a;
                ans2 += a;
            }
        }
        printf("%d %d\n", ans1, ans2);
    }
    return 0;
}