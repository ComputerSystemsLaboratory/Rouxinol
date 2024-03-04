#include <stdio.h>

int main(){
    int n[200][2] = {}, i = 0, a, sum, digit;
    
    while (scanf("%d %d", &n[i][0], &n[i][1]) != EOF) {
        i++;
    }
    
    for (a = 0; a < i; a++) {
        sum = n[a][0] + n[a][1];
        digit = 0;
        while (sum != 0) {
            sum = sum / 10;
            digit++;
        }
        printf("%d\n", digit);
    }
    return 0;
}