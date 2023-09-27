#include<stdio.h>

#define VMAX 10001

int main()
{
    int i, n, val, max, C[VMAX];
    scanf("%d", &n);
    max = 0;

    for(val = 0; val < VMAX; val++) C[val] = 0;

    for(i = 0; i < n; i++){
        scanf("%d", &val);
        C[val] = C[val] + 1;
        if(max < val) max = val;
    }
    for(val = 0; C[val] == 0; val++);
    printf("%d", val);
    C[val] = C[val] - 1;

    while(val <= max){
        if(C[val] > 0){
            printf(" %d", val);
            C[val] = C[val] - 1;
        }else{
            val++;
        }
    };
    printf("\n");

    return 0;
}