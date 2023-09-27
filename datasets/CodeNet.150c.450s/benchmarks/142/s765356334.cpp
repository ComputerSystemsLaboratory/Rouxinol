#include<stdio.h>
int main(){
    int N, K;
 
    int a[200002];
    scanf("%d %d", &N, &K);

    for (int i=0; i<N; i++){
        scanf ("%d", a + i);
    }

    for (int i=K; i<N; i++){
        if (a[i] > a[i - K]){
            printf ("Yes\n");
        }
        else {
            printf ("No\n");
        }
    }
    return 0;
}