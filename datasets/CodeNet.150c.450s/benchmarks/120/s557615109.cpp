/*
P135
AOJ 0525 Osenbei
*/

#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <functional>
#include <string.h>
using namespace std;



int R, C;
int num[10][10000];
int isFlipped[10];
int count0[10000];

bool read()
{
    scanf("%d%d", &R, &C);
    if(R==0 && C==0) return false;
    memset(count0, 0, sizeof(count0));
    memset(isFlipped, 0, sizeof(isFlipped));
    for(int i=0; i<R; ++i)
    for(int j=0; j<C; ++j){
        scanf("%d", &num[i][j]);
        if(!num[i][j])count0[j]++;
    }
    return true;
}


void FlipRow(int r)
{
    isFlipped[r] ^= 1;
    for(int j=0; j<C; ++j){
        num[r][j]^=1;
        if(!num[r][j]) count0[j]++;
        else count0[j]--;
    }
}

void FlipRows(int i)
{
    for(int r=0; r<R; ++r)
    {
        if(  ((i>>r)&1) ^ (isFlipped[r])  ) FlipRow(r);
    }
}

int countNum()
{
    int ans = 0;
    for(int j=0; j<C; ++j){
        ans += max(count0[j], R-count0[j]);
    }
    return ans;
}

void solve()
{
    int ans = 0;
    for(int i=0; i<(1<<R); i++)
    {
        FlipRows(i);
        ans = max(ans, countNum());
    }
    printf("%d\n", ans);
}

int main()
{
    while(read())
        solve();
}