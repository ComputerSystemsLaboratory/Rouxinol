#include <cstdio>
int cnt[1001];
int main() {
    int n;
    for (int i=1; i<=1000; i++) {
        int sum=i;
        for (int j=i+1;; j++) {
            sum+=j;
            if (sum>1000) break;
            cnt[sum]++;
        }
    }
    while (scanf("%d",&n)) {
        if (!n) break;
        printf("%d\n",cnt[n]);
    }
}