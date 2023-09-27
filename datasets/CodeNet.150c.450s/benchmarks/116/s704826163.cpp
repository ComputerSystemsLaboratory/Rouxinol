#include <cstdio>
int a[200000];
int main() {
    int n, k;
    while (scanf("%d %d",&n,&k)&&n!=0) {
        for (int i=0; i<n; i++) scanf("%d",&a[i]);
        int max=0;
        for (int i=0; i<k; i++) max+=a[i];
        int tmp=max;
        for (int i=0; i<n-k; i++) {
            tmp=tmp-a[i]+a[i+k];
            if (tmp>max) max=tmp;
        }
        printf("%d\n",max);
    }
    return 0;
}