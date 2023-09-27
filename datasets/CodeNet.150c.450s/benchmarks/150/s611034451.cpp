#include<iostream>
#include<cstdio>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<cstring>
#include<string>
#include<cmath>
#include<list>
#include<algorithm>
using namespace std;
#define inf 0x3f3f3f3f
typedef long long ll;
const int maxn = 2000000 + 8;
const int maxv = 10000 + 8;

int n;

int a[maxn],c[maxn],b[maxn];

int main()
{
    memset(a,0,sizeof a);
    memset(b,0,sizeof b);
    memset(c,0,sizeof c);
    scanf("%d",&n);
    for(int i = 0; i < n; ++i)
    {
        scanf("%d",&a[i]);
        c[a[i]]++;
    }
    for(int i = 1; i < maxv; ++i) {
        c[i] += c[i-1];
    }
    for(int i = n-1; i >= 0; --i)
    {
        b[c[a[i]]] = a[i];
        c[a[i]]--;
    }

    for(int i = 1; i <= n; ++i){
        printf("%s%d", i== 1 ? "":" ",b[i]);
    }
    printf("\n");
    return 0;
}