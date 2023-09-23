#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
    int n, i, j, k;
    int b, f, r, v;
    int count[4][3][10] = {0};

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d %d %d %d", &b, &f, &r, &v);
        count[b - 1][f - 1][r - 1] += v;
    }
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 10; k++){
                printf(" %d", count[i][j][k]);
                if(k == 9) putchar('\n');
                if(i != 3 && j == 2 && k == 9) printf("####################\n");
            }
        }
    }
    return 0;
} 
