#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << __LINE__ << " : " << #x << " = " << (x) << endl;
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define FORR(i,a,b) for(int i=(int)(b)-1;i>=(int)(a);i--)
#define CHMIN(a,b) (a) = min((a),(b))
#define CHMAX(a,b) (a) = max((a),(b))

int main()
{
    int n,r;
    int p,c;
    int move[55]={};
    int keep[55]={};
    while(1==1)
    {
        scanf("%d %d\n",&n,&r);
        REP(i,n)move[i]=n-i;
        if(n==0 && r==0)break;
        REP(i,r)
        {
            scanf("%d %d\n",&p,&c);
            REP(j,n)keep[j]=move[j];
            REP(j,c)move[j]=keep[j+p-1];
            for(int j=c;j<c+p-1;j++)move[j]=keep[j-c];
            //REP(j,n)printf("%d ",move[j]);
            //printf("###\n");
        }
        printf("%d\n",move[0]);
    }
    return 0;
}
