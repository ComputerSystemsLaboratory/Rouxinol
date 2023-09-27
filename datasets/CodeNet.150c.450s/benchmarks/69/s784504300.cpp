//
// Create by 神舟 on 2015-02-20
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <cctype>
#include <stack>
#include <queue>
#include <map>
#include <string>
#include <set>
#include <vector>
using namespace std;

#define CLR(x) memset(x,0,sizeof x)
#define ll long long
#define inf 0x3f3f3f3f
const int maxn=1e5+5;
const int MOD=5e5+5;
int n,flag,num[maxn],l[maxn],r[maxn];
void dfs(int ln,int rn)
{

    if(ln+rn==10) flag=1;
    if(flag) return;
    if(num[ln+rn+1]>l[ln]){
        l[ln+1]=num[ln+rn+1];
        dfs(ln+1,rn);
    }
    if(num[ln+rn+1]>r[rn]){
        r[rn+1]=num[ln+rn+1];
        dfs(ln,rn+1);
    }
}
int main()
{
#ifdef LOCAL
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
#endif
	ios_base::sync_with_stdio(0);

	scanf("%d",&n);
	while(n--){
        flag=0;
        CLR(l);
        CLR(r);
        CLR(num);
        l[0]=r[0]=-inf;
        for(int i=1;i<11;scanf("%d",num+i++));
        dfs(0, 0);
        if(flag) printf("YES\n");
        else printf("NO\n");
	}
	return 0;
}