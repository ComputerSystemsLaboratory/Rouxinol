#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
typedef long long LL;
using namespace std;
#define REPF( i , a , b ) for ( int i = a ; i <= b ; ++ i )
#define REP( i , n ) for ( int i = 0 ; i < n ; ++ i )
#define CLEAR( a , x ) memset ( a , x , sizeof a )
const int N=1e7;
int sum[N];
bool vis[N];
void initPrime()
{
    int num = 0, m = sqrt (N + 0.5);
    for (int i = 2; i <= m; ++i)
        if (vis[i] == 0)
            for (int j = i * i; j <= N; j += i) vis[j] = 1;
    sum[1]=0;
    for(int i=2;i<=N;i++)
    {
        if(!vis[i])  sum[i]=sum[i-1]+1;
        else   sum[i]=sum[i-1];
    }
//    for(int i=2;i<=10;i++)
//        cout<<"233  "<<sum[i]<<endl;
}
int main()
{
    int n;
    initPrime();
    while(~scanf("%d",&n))
        printf("%d\n",sum[n]);
    return 0;
}