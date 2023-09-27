#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
#define REP(i,n) for(int i=0;i<(int)(n);i++)
 
 
int main()
{
    int h;
    while(1==1)
    {
        scanf("%d\n",&h);
        if(h==0)break;
        int ban[15][5]={};
        int del=0;
        long int ans=0;
        REP(y,h)REP(x,5)scanf("%d ",&ban[y][x]);
        do{
            del=0;
            REP(y,h)
            {
                int center=ban[y][2];
                int centnum=1;
                if(ban[y][1]==center)
                {
                    centnum++;
                    if(ban[y][0]==center)centnum++;
                }
                if(ban[y][3]==center)
                {
                    centnum++;
                    if(ban[y][4]==center)centnum++;
                }
                if(centnum>=3 && center!=0)
                {
                    ban[y][2]=0;
                    if(ban[y][1]==center)
                    {
                        ban[y][1]=0;
                        if(ban[y][0]==center)ban[y][0]=0;
                    }
                    if(ban[y][3]==center)
                    {
                        ban[y][3]=0;
                        if(ban[y][4]==center)ban[y][4]=0;
                    }
                    ans+=centnum*center;
                    del++;
                }
            }
            REP(x,5)REP(i,1000)REP(y,h-1)if(ban[y][x]!=0&&ban[y+1][x]==0)swap(ban[y][x],ban[y+1][x]);
            /*
            REP(y,h)
            {
                REP(x,5)
                {
                    printf("%d ",ban[y][x]);
                }
                printf("\n");
            }
            printf("###\n");
            */
        }while(del>0);
        printf("%ld\n",ans);
    }
    return 0;
}
