#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
using namespace std;
const int MAXN = (int) 1e5 + 10;
const int INF = (int) 0x3f3f3f3f;
typedef long long LL;

int n;

void work(){
    scanf("%d",&n);
    int mx=-INF,mi=INF;
    LL sum=0;
    for(int i=1;i<=n;i++){
        int x; scanf("%d",&x);
        mx=max(mx,x);
        mi=min(mi,x);
        sum+=x;
    }
    printf("%d %d %lld\n",mi,mx,sum);
}

int main(){
    work();
    return 0;
}










