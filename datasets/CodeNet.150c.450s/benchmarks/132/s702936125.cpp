#include<stdio.h>
#include<iostream>
#include<string.h>
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
    int n,p;
    while(1==1)
    {
        scanf("%d %d\n",&n,&p);
        if(n==0&&p==0)return 0;
        int ko[55]={};
        int zan=p;
        int poi=0;
        int judge=0;
        while(judge==0)
        {
            for(int i=0;i<n;i++)ko[i]+=zan/n;
            zan-=(zan/n)*n;
            while(zan>0)
            {
                ko[poi]++;
                if(ko[poi]==p)
                {
                    printf("%d\n",poi);
                    judge=1;
                    break;
                }
                zan--;
                poi++;
                if(poi>=n)poi-=n;
            }
            if(judge==1)break;
            while(zan==0)
            {
                if(ko[poi]>0)
                {
                    zan=ko[poi];
                    ko[poi]=0;
                }
                poi++;
                if(poi>=n)poi-=n;
            }
        }
    }
    return 0;
}
