
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stack>
#include<vector>

#define NIL -1
int a[11][101][11];

int dp(int n,int s,int t){
    if(a[n][s][t]== NIL ){
        if(t==10 || (n==1 && (s<t ||9<s))){
            a[n][s][t]=0;
        }else if(n==1){
            a[n][s][t]=1;
        }else{
            a[n][s][t]=dp(n-1,s-t,t+1)+dp(n,s,t+1);
        }
    }
    return a[n][s][t];
}

int main(){
    int n,s;
    scanf("%d %d",&n,&s);
    while(n!=0 || s!=0){
        for(int i=0;i<=10;i++)for(int j=0;j<=100;j++)for(int k=0;k<=10;k++)a[i][j][k]=NIL;
        printf("%d\n",dp(n,s,0));
        scanf("%d %d",&n,&s);
    }
    
    return 0;
}