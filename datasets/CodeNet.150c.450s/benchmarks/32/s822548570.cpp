#include <bits/stdc++.h>
using namespace std;
int p[200];
int main() {
    int m,n_min,n_max;
    while(scanf("%d %d %d",&m,&n_min,&n_max),m) {
        for(int i=0;i<m;i++) {
            scanf("%d",&p[i]);
        }
        int max_gap=0;
        int ans=0;
        for(int i=n_min;i<=n_max;i++) {
            if(p[i-1]-p[i]>=max_gap) {
                max_gap=p[i-1]-p[i];
                ans=i;
            }
        }
        printf("%d\n",ans);
    }
}