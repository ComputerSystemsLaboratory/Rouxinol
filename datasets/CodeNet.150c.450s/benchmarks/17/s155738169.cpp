#include <stdio.h>

#define N 5
int main(void){
    int a[N], tmp;
   
    for (int i=0; i<N; i++) scanf("%d", &a[i]);
    for (int i=N-1; i>0; i--){
        for (int j=0; j<i; j++){
            if (a[j] < a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
 	}
    }
    for (int i=0; i<N-1; i++) printf("%d ", a[i]);
    printf("%d\n", a[N-1]);
    return 0;
}