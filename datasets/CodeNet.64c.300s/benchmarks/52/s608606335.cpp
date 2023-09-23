///Sum of integers
#include<stdio.h>

int N,S;

int f(int n,int m,int s){
    if(m==10){
        if(S==s&&N==n)return 1;
        return 0;
    }

    return f(n,m+1,s)+f(n+1,m+1,s+m);
}
int main(void){
    while(1){
        scanf("%d%d",&N,&S);
        if(N==0&&S==0)break;

        printf("%d\n",f(0,0,0));
    }
    return 0;
}