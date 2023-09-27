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
int vis[N];  
void initPrime()  
{  
    int num = 0, m = sqrt (N + 0.5);  
    REPF(i,1,N)   vis[i]=1;  
    for (int i = 2; i <= m; ++i)  
        if (vis[i] == 1)  
            for (int j = i * i; j <= N; j += i) vis[j] = 0;  
    vis[1]=0;  
    for(int i=2;i<=N;i++)  
         vis[i]+=vis[i-1];  
//    for(int i=2;i<=10;i++)  
//        cout<<"233  "<<sum[i]<<endl;  
}  
int main()  
{  
    int n;  
    initPrime();  
    while(~scanf("%d",&n))  
        printf("%d\n",vis[n]);  
    return 0;  
}  