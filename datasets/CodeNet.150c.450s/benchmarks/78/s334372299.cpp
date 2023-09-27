#include <cstdio>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define REP(i,n) FOR(i,0,n)

typedef long long ll;

const int INF=1e9;
const int N=1000001;
int mem[N],memo[N];


int tetra(int x)
{
    return x*(x+1)*(x+2)/6;
}
int main()
{
    REP(i,N)
    {
        mem[i]=INF;
        memo[i]=INF;
    }
    mem[0]=0;
    memo[0]=0;
    for(int j=200;j>=1;j--)
    {
        int c = tetra(j);
        REP(i,N)
        {
            if(i+c>=N) continue;
            if(c%2==1)
            {
                memo[i+c]=min(memo[i+c], memo[i]+1);
            }

            mem[i+c]=min(mem[i+c], mem[i]+1);
        }
    }

    /*
    REP(i,30)
        cout<<mem[i]<<" \n"[i==29];
    REP(i,30)
        cout<<memo[i]<<" \n"[i==29];
        */

    int n;
    while(cin>>n,n)
    {
        cout<<mem[n]<<" "<<memo[n]<<endl;
    }
}