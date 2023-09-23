#include<cstdio>
#include<iostream>
using namespace std;

int main(){
    int a,b;
    int cnt=0;
    int m[16]={0};
    while(scanf("%d%d",&a,&b),a,b){
        int ro[32][32]={{0}};
        ro[0][1]=1;
        int n;
        scanf("%d",&n);
        int x,y;
        for(int i=0;i<n;i++){
            scanf("%d%d",&x,&y);
            ro[y][x]=1;
        }
        for(int i=1;i<=b;i++){
            for(int j=1;j<=a;j++){
                if(ro[i][j]==1)ro[i][j]=0;
                else ro[i][j]=(ro[i-1][j]+ro[i][j-1]);
            }
        }
        m[cnt]=ro[b][a];
        cnt++;
    }
    for(int i=0;i<cnt;i++){
        printf("%d\n",m[i]);
    }
    return 0;
}