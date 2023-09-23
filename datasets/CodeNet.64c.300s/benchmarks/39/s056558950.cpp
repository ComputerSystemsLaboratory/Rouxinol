#include<stdio.h>
 
int main(void){
    int a, b, c, d, n = 0;
    int ans = 0;
     
    while(scanf("%d", &n) != EOF){
        ans = 0;
        if(n <= 36){
            for(a = 0; a <= 9; a++){
                for(b = 0; b <= 9; b++){
                    for(c = 0; c <= 9; c++){
                        for(d = 0; d <= 9; d++){
                            if(a + b + c + d ==n){
                                ans++;
                            }
                        }
                    }
                }
            }
            printf("%d\n", ans);
        }else{
            printf("0\n");
        }
    }
    return 0;
}