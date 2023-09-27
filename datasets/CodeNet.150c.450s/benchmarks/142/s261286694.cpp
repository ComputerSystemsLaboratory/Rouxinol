#include<stdio.h>

int main(){
    int N, K;
    scanf("%d %d", &N, &K);
    int n[N];
    for(int i = 0; i<N; i++){
        scanf("%d", &n[i]);
    }
    for(int i = K; i<N; i++){
        if(n[i-K]<n[i]){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
}