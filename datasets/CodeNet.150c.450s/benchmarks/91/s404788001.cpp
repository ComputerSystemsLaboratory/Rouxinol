#include <stdio.h>

int main() {
    int i, k, v,scan,an;
    int MAX_V = 999999;
    int count[MAX_V+1];
    int prime[MAX_V+1];
    for(i = 2; i <= MAX_V; i++) {
        prime[i] = 1;
    }
    for(i = 2; i*i <= MAX_V; i++) {
        if(prime[i]) {
            for(k = 2 * i; k <= MAX_V; k += i) {
                prime[k] = 0;   
            } 
        }
    }
    count[2]=0;
    for(i=2;i<=MAX_V;i++){
        count[i+1]= count[i]+prime[i];
    }
    while(scanf("%d",&scan)!= EOF){
        printf("%d\n",count[scan+1]);
    }
    return 0; 
}