#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<bitset>
#define MAX_C 10000
#define MAX_N 10
using namespace std;
bitset<MAX_C> b[MAX_N];
int main()
{
    int n,c;
    int ans,res;
    res=0;
    scanf("%d %d",&n,&c);
    while(n!=0||c!=0)
    {
    for(int i=0;i<n;i++)
        for(int j=0;j<c;j++)
        {
          bool x;
          cin>>x;
          b[i][j]=x;
        }
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
            if(i&(1<<j))
              b[j].flip();
    int sum=0;
    for(int j=0;j<c;j++)
    {
        int cnt=0;
        for(int k=0;k<n;k++)
            if(b[k][j]) cnt++;
        ans=max(cnt,n-cnt);
        sum+=ans;
    }
    res=max(sum,res);
    for(int j=0;j<n;j++)
            if(i&(1<<j))
              b[j].flip();
    }
    printf("%d\n",res);
    scanf("%d %d",&n,&c);
    }
    return 0;
}