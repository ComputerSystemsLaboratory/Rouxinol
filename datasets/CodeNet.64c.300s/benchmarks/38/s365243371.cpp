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
const int maxn=1e1+5;
const int MOD=5e5+5;
int num[maxn],n;
bool dfs( int deep, int A, int B)
{
    if(deep==11) return true;
    if(num[deep]>A&&dfs(deep+1,num[deep],B)) return true;
    if(num[deep]>B&&dfs(deep+1,A,num[deep])) return true;
    return false;

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
        CLR(num);
        for(int i=1;i<11;scanf("%d",num+i++));
        if(dfs(1,-inf,-inf)) printf("YES\n");
        else printf("NO\n");
	}
	return 0;
}