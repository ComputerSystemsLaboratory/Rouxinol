#include<stdio.h>
int sum (int n,int s,int cnt);

int N,S,latte;

int main (void)
{
    int i;
    while(1){
        scanf("%d%d",&N,&S);
        if(N==0&&S==0)break;
        latte = 0;
        printf("%d\n",sum(0,0,0));
        //printf("latte = %d\n",latte);
    }
    return 0;
}
int sum(int n,int s,int cnt)
{
    latte++;
    if(s>S || cnt>N || s+(n+9)*(9-n+1)/2<S) return 0;
    if(n>9){
        if(cnt==N && s==S) return 1;
        else return 0;
    }
    return sum(n+1,s+n,cnt+1)+sum(n+1,s,cnt);
}