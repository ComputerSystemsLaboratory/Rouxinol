#include<cstdio>

int main(void){
    while(true){
        int n, x;
        int i, j, k;
        int ans = 0;

        scanf("%d %d", &n, &x);
        if(n == 0 && x == 0)    break;


        for(i = 1; i <= n; i++){
            for(j = i + 1; j <= n; j++){
                for(k = j + 1; k <= n; k++){
                    if(x == i + j + k){
                        ans++;
                    }
                }
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}