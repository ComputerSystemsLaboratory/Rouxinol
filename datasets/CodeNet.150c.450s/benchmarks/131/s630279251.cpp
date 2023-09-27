#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string.h>
#include <cmath>
#include <cstdlib>
#include <queue>
#define INF 200000000
#define MAXN 1005
#define MAXM 10005
using namespace std;
int a[MAXM],l,i,j,ans,b[10];
void find(int num)
{
    int n1=0,n2=0;
    int po=1;
    memset(b,0,sizeof(b));
    while(num>0){b[po++]=num-num/10*10;num/=10;}
    sort(b,b+l+1);
    for(i=1;i<=l;i++)n1=n1*10+b[i];
    for(i=l;i>=1;i--)n2=n2*10+b[i];
    a[++j]=n2-n1;

    for(i=0;i<j;i++)
    if(a[i]==a[j]){ans=a[j];return;}
    find(a[j]);

}
int main()
{
    int num;
    while(scanf("%d%d",&num,&l))
    {
        if(num==0&&l==0)break;
        a[0]=num;j=0;
        find(num);
        printf("%d %d %d\n",i,ans,j-i);
    }
    return 0;
}