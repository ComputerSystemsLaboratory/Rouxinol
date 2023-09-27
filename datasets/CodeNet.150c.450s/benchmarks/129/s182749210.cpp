#include <iostream>
using namespace std;
int main(void){
    int num[100][100], sum1[100] = {0}, sum2 = 0, SUM = 0;
    int i, j, r, c;

    scanf("%d %d", &r, &c);
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &num[i][j]);
            sum1[i] += num[i][j];
        }
    }

    for(i = 0; i < r; i++){
        for(j = 0; j < c + 1; j++){
            if(j >= 0 && j < c)
                printf("%d ", num[i][j]);
            if(j == c)
                printf("%d", sum1[i]);
        }
        putchar('\n');
    }
    for(i = 0; i < c; i++){
        for(j = 0; j < r; j++){
            sum2 += num[j][i]; 
        }
        printf("%d ", sum2);
        sum2 = 0;
    }

    for(i = 0; i < r; i++)
        SUM += sum1[i];
    printf("%d\n", SUM);

    return 0;
} 
