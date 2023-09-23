#include <cstdio>
int main(){
    int n, x, answer = 0;
    
    while (1){
        scanf("%d%d", &n, &x);
        if (n == 0 && x == 0) break;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                for (int k = 1; k <= n; k++){
                    if (i == j || j == k || k == i) continue;
                    if (i + j + k == x) answer += 1;
                }
            }
        }
        printf("%d\n", answer / 6);
        answer = 0;
    }
    return 0;
}