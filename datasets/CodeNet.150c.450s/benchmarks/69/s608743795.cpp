/*
  ID: oodt
  PROG:
  LANG:C++
*/
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>

using namespace std;

const int maxx=105;
int n,m,k;
int a[maxx];
int l[maxx],r[maxx];
bool ok;

void dfs(int i,int j, int k)
{
    if(i > 10)
    {
        ok = 1;
        return ;
    }
//    if(ok) return;
    if(a[i] > l[j-1])
    {
        l[j] = a[i];
        dfs(i+1,j+1,k);
    }
    if(a[i] > r[k-1])
    {
        r[k] = a[i];
        dfs(i+1,j,k+1);
    }
}

int main()
{
#ifdef LOCAL
    freopen("/Users/ecooodt/Desktop/c++ and acm/bai?/2.1/3.txt","r",stdin);
#endif
    int T;
    scanf("%d",&T);
    while(T--)
    {
        memset(r,0,sizeof(r));
        memset(l,0,sizeof(l));
        for(int i = 1; i <= 10; i++)
        {
            scanf("%d",&a[i]);
        }
        ok = 0;
        dfs(1,1,1);
        if(ok){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}