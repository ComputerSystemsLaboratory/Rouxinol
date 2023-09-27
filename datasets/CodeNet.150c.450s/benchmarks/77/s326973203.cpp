#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
#define REP(i,n) for(int i=0;i<(int)(n);i++)
 
 
int main()
{
    int n,m;
    int isix[25]={};
    int isiy[25]={};
    int nowx,nowy;
    int ban[25][25];
    char dir;
    int dist;
    int judge;
    while(1==1)
    {
        judge=1;
        nowx=10;
        nowy=10;
        REP(i,25)isix[i]=10000;
        REP(i,25)isiy[i]=10000;
        REP(i,25)REP(j,25)ban[i][j]=0;
        scanf("%d\n",&n);
        if(n==0)return 0;
        REP(i,n)scanf("%d %d\n",&isix[i],&isiy[i]);
        scanf("%d\n",&m);
        REP(i,m)
        {
            scanf("%c %d\n",&dir,&dist);
            while(dir=='N'&&dist>0)
            {
                dist--;
                nowy++;
                ban[nowy][nowx]=1;
            }
            while(dir=='E'&&dist>0)
            {
                dist--;
                nowx++;
                ban[nowy][nowx]=1;
            }
            while(dir=='S'&&dist>0)
            {
                dist--;
                nowy--;
                ban[nowy][nowx]=1;
            }
            while(dir=='W'&&dist>0)
            {
                dist--;
                nowx--;
                ban[nowy][nowx]=1;
            }
        }
        REP(i,n)
        {
            if(ban[isiy[i]][isix[i]]==0)judge=0;
        }
        if(judge==0)printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}
