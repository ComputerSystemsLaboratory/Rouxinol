#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define pb push_back
int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};
 
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

int main(){
    int ai,am,as,ae,bi,bm,bs,be;
    scanf("%d%d%d%d%d%d%d%d",&ai,&am,&as,&ae,&bi,&bm,&bs,&be);
    int S = ai + am + as + ae;
    int T = bi + bm + bs + be;
    printf("%d\n",S > T ? S : T);
    return 0;
}