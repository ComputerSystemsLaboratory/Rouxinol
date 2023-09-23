#include<cstdio>
#include<cstring>
#include<vector>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<queue>
#include<set>
#include<map>
using namespace std;

const int maxn = 1000;
const int INF = 1e9+10;

int a[maxn];

bool dfs(int cur, int l, int r)
{
    if(cur == 10) return true;
    if (a[cur] > l) if(dfs(cur+1,a[cur],r)) return true;
    if (a[cur] > r) if(dfs(cur+1,l,a[cur])) return true;
    return false;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        for(int i = 0; i < 10; i++) scanf("%d",&a[i]);
        if(dfs(0,0,0)) printf("YES\n");
        else printf("NO\n");
    }
}