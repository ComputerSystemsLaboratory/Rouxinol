#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n),n){
        int stage[100000] = {0};
        for(int i = 1;i <= n; i++){
            scanf("%d",&stage[i]);
        }
        int x = 0;
        int ans = -1000000;
        for(int i = 1;i <= n; i++){
            for(int j = i;j <= n; j++){
                x += stage[j];
                ans = max(ans,x);
            }
            x = 0;
        }
        printf("%d\n",ans);
    }
    return 0;
}