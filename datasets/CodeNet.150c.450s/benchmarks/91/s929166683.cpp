#include<cstdio>
#include<algorithm>
#include<cstring>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
bool prime(int cur)
{
    if(cur==1||cur==0)return false;
    for(int i=2;i<=sqrt(cur);i++)
    {
        if(cur%i==0)
        {
            return false;
        }
    }
    return true;
}
int cnt[1000005];
int main()
{
    for(int i=1;i<=1000005;i++)
    {
        if(prime(i))cnt[i]=cnt[i-1]+1;
        else cnt[i]=cnt[i-1];
    }
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        cout<<cnt[n]<<endl;
    }
    return 0;
}
