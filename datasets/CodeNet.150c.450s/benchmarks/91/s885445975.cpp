#include<stdio.h>
const int MAX_N = 1000000;
int n;
int num[MAX_N];
int ans=0;

int main(){

    for (int i = 2; i < MAX_N; i++){
        num[i] = 1;
    }
    for (int i = 2; i < MAX_N; i++){
        if (num[i] == 0) continue;
        for (int j = 2; i*j < MAX_N; j++){
            num[i*j] = 0;
        }
    }

    while(scanf("%d",&n) != -1){
        ans = 0;
        for(int i = 0; i < n+1; i++){
            if(num[i] == 1){
            ans++;
        }
        }
        printf("%d\n",ans);
    }
    return 0;
}