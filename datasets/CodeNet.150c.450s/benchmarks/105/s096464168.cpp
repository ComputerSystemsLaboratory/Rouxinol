#include<iostream>
#include<cstdio>
#include <stdio.h>
#include<algorithm>
#include<cstring>
#include <string>
#include<cmath>
#include<cstdlib>
#include<queue>
#include<map>
#include<vector>
#include<bits/stdc++.h>
#include <set>
#define ll long long
#define IO ios::sync_with_stdio(false);cin.tie();cout.tie(0)
#define inf 0x3f3f3f3f
#define pi 3.1415926535898
using namespace std;
int t,n;
char s[100010];
ll a[100010];
ll d[64];
bool add(ll x)
{
    for(int i=60; i>=0; i--)
    {
        if(x&(1ll<<i))
        {
            if(d[i])
            {
                x^=d[i];
            }
            else
            {
                d[i]=x;
                return true;
            }
        }
    }
    return false;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        scanf("%s",s+1);
        bool ans=true;
        for(int i=1; i<=n; i++)
        {
            if(s[i]=='1')
            {
                memset(d,0,sizeof(d));
                for(int j=i+1; j<=n; j++)
                    if(s[j]=='0')
                        add(a[j]);
                if(add(a[i]))
                    ans=false;
            }

        }
        if(ans)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    return 0;
}
