/* 
 author:hdsdogge 
 begin: 
 end: 
 cost: 
 */
#include<iostream>
#include<string>
#include<queue>
#include<map>
#include<stack>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<vector>
#include<bitset>
#include<cstdlib>
#include<list>
#include <sstream>
#include<ctype.h>
using namespace std;
const int maxn=100+10;
typedef pair<int,int> P;
typedef long long ll;
const double PI = acos(-1.0);
const double eps = 1e-6;
const int INF = 1000000000;
int T,n,m;
int a[maxn];
bool ans;
void dfs(int l,int r,int cnt){
    if(cnt==10)
        ans=true;
    if(a[cnt]>l)
        dfs(a[cnt],r,cnt+1);
    if(a[cnt]>r)
        dfs(l,a[cnt],cnt+1);
}
int main() {
    //freopen("test","r",stdin);
    //freopen("out","w",stdout);
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    cin>>T;
    while(T--){
        for(int i=0;i<10;i++)
            cin>>a[i];
        ans=false;
        dfs(0,0,0);
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
} 


