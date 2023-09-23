#include<cstdio>
using namespace std;

int boll[15];
int dig[2];

bool dfs(int d)
{
    if(d==10) return true;
    int tmp;
    for(int i=0; i<2; ++i)
    {
        if(boll[d]>dig[i])
        {
            tmp = dig[i];
            dig[i] = boll[d];
            if(dfs(d+1)) return true;
            dig[i] = tmp;
        }
    }
    return false;
}

void solve()
{
    dig[0] = dig[1] = -1;
    bool ans = dfs(0);
    printf("%s\n", ans?"YES":"NO");
}

int main()
{
    int n;
    scanf("%d\n", &n);
    while(n--)
    {
        for(int i=0; i<10; ++i) scanf("%d", &boll[i]);
        solve();
    }
    return 0;
}