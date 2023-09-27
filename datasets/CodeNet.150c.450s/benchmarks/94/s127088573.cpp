#include <stdio.h>
#include <math.h>
int main() {
    
    int N;
    int A[10000];
    int flag;
    int tmp = 0;
    int count;
    
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
//    for(int i = 0; i < N; i++){
//        printf("%d", A[i]);
//    }
//     
    
    flag = 1;
    while (flag == 1){
        flag = 0;
        for( int j = 0; j < N; j++){
            if( A[j]<A[j-1]){
                tmp = A[j];
                A[j] = A[j-1];
                A[j-1] = tmp;
                flag = 1;
                count++;
            }
        }
    }
    printf("%d", A[0]);
    for(int i = 1; i < N; i++){
        printf(" %d", A[i]);

    }
    printf("\n%d\n", count);
    
       return 0;
}