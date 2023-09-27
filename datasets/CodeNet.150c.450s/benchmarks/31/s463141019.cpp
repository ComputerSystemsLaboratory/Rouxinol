#include <cstdio>
#include <algorithm>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int r[n];

    rep(i,n){
        int m;
        scanf("%d",&m);
        r[i] = m;
    }

    int min_r = r[0];
    int ans = r[1] - r[0];
    for(int i = 1; i < n; i++){
        min_r = min(r[i-1], min_r);
        ans = max(ans, r[i] - min_r);
    }

    printf("%d\n",ans);

}
