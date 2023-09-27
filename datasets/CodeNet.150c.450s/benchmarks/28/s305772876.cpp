#if 0


#endif // 0

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

int n,k;
int w[MAXN];

bool is_judge(int x){
    int cnt=0,cur=0;
    int p=1;
    while(p<=n){
        while(p<=n){
            if(cur+w[p]>x) break;
            cur+=w[p++];
        }
        cur=0;
        cnt++;
    }
    return cnt<=k;
}

void work(){
    scanf("%d%d",&n,&k);
    int L=1,R=1000000000;
    for(int i=1;i<=n;i++){
        scanf("%d",&w[i]);
        L=max(L,w[i]);
    }
    int ans=0;
    while(L<=R){
        int mid=(L+R)>>1;
        if(is_judge(mid)){
            R=mid-1;
            ans=mid;
        }
        else{
            L=mid+1;
        }
    }
    printf("%d\n",ans);
}

int main(){
    work();
    return 0;
}



