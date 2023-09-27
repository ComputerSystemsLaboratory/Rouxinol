#include <stdio.h>

int main() {
    // insert code here...
    int n;
    int x[1000];
    int y;
    int h, i, j, k;
    int di, an;
    for(;;){
        scanf("%d", &n);
        if(n == 0) break;
        else{
            for(h = 1; h < n + 1; h++){
                scanf("%d", &x[h]);
            }
            for(i = 2; i < n + 1; i++){
                j = i - 1;
                while(j > 0 && x[j] > x[j+1]){
                    y = x[j+1];
                    x[j+1] = x[j];
                    x[j] = y;
                    j = j - 1;
                }
            }
            an = 1000000;
            for(k = 1; k < n; k++){
                di = x[k+1] - x[k];
                if(an > di) an = di;
            }
            
            printf("%d\n", an);
        }
    }
    return 0;
}
