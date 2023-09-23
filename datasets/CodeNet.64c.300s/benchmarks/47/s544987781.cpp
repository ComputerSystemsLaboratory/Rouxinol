#include <stdio.h>

#define N 100

int main(void){
    int times[N];
    int n, maxtm=0;
    
    for (int i=0; i<N; i++) times[i]=0;
    while (scanf("%d", &n)!=EOF){
        times[n]++;
        if (times[n] > maxtm) maxtm = times[n];
    }
    for (int i=0; i<N; i++){
        if (times[i]==maxtm) printf("%d\n", i);
    }
    return 0;
}