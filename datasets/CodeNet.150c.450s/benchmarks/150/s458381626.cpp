#include <stdio.h>

int main(void){
    int n;
    int A[10001];

    for(int i = 0; i < 10001; i++){
        A[i] = 0;
    }
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        A[num] += 1;
    }

    bool is_first = true;
    for(int i = 0; i < 10001; i++){
        for(int j = 0; j < A[i]; j++){
            if(is_first){
                printf("%d", i);
                is_first = false;
                continue;
            }
            printf(" %d", i);
        }
    }

    printf("\n");
}

