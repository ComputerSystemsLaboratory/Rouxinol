#include<stdio.h>

int p[201];
int gap = -1;
int ans = -1;
int main(){
    int m, n_min, n_max;
    for(;;){
        scanf("%d %d %d\n",&m, &n_min, &n_max);
        if(m == 0 && n_max == 0 && n_min == 0) break;
        for(int i=1; i<=m; i++){
            scanf("%d\n",&p[i]);
        }
        for(int border = n_min; border <= n_max; border++){
            if(gap <= p[border] - p[border+1]){
                gap = p[border] - p[border+1];
                ans = border;
            }
        }
        printf("%d\n",ans);
        ans = -1;
        gap = -1;
    }
    return 0;
}