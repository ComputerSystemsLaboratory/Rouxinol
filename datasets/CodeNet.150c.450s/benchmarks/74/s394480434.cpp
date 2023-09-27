#include<stdio.h>
#define MAX 1000000000
int memo[50010];
int c[20];
int f(int x){
    int i;
    int min=MAX,a;
    if(x==0)return 0;
    if(memo[x]!=0)return memo[x];
    for(i=0;i<20;i++){
        if(x-c[i]>=0&&c[i]>0){
            a=f(x-c[i]);
            if(min>a)min=a;
        }
    }
    return memo[x]=min+1;
}

int main(void){
    int i,n,m;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%d",&c[i]);
    }
    printf("%d\n",f(n));
}