#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<set>
#define INF 1000000000
#define MAXN 100005
#define sf(n) scanf("%d",&n)
#define sff(m,n) scanf("%d%d",&m,&n)
#define gl(x) getline(cin,x)
#define gc() getchar()
using namespace std;
int a[15][10005];
int main()
{
    while(1){
    int n,m;sff(n,m);
    if(n==0&&m==0)break;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            sf(a[i][j]);
    int mmax=0;
    for(int i=0;i<pow(2,n);i++)
    {
        int b[10];int r=i;
        for(int j=0;j<n;j++)
        {
            b[j]=r%2;r/=2;
        }
        int sum=0;
        for(int j=0;j<m;j++)
        {
            int k=0;
            for(int u=0;u<n;u++){
                //cout<<a[u][j]<<"  "<<b[u]<<endl;
                if((a[u][j]&&!b[u])||((!a[u][j])&&b[u]))k++;
            }
            //cout<<k<<"??"<<endl;
            sum+=max(k,n-k);
        }
        //cout<<i<<"  "<<sum<<endl;
        mmax=max(mmax,sum);
    }
    printf("%d\n",mmax);
    }
}

