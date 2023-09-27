#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int ctr[10001] = {0};
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= 100; j++) {
            for (int k = 1; k <= 100; k++) {
                int temp = i * i + j * j + k * k + i * j + j * k + i * k;
                if (temp <= 10000) {
                    ctr[temp]++;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++){
        printf("%d\n", ctr[i]);
    }
    return 0;
}