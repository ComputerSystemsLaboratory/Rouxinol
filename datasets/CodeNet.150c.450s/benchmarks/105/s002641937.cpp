#include <bits/stdc++.h>
using namespace std;
long long a[205];
char s[205];
long long dp[65];
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        memset(dp, -1, sizeof(dp));
        int n;
        scanf("%d", &n);
        for(int i=1;i<=n;i++) scanf("%lld", &a[i]);
        scanf("%s", s+1);
        bool ans = 0;
        for(int i=n;i>=1;i--){
            if(s[i] == '0'){
                for(int j=60;j>=0;j--){
                    if((a[i]>>j)&1){
                        if(dp[j] == -1){
                            dp[j] = a[i];
                            break;
                        }
                        else a[i] ^= dp[j];
                    }
                }
            }
            else{
                long long sum = 0;
                for(int j=60;j>=0;j--){
                    if(((a[i]>>j)&1) != ((sum>>j)&1)){
                        if(dp[j] == -1) break;
                        sum ^= dp[j];
                    }
                }
                if(sum != a[i]){
                    ans = 1;
                    break;
                }
            }

        }
        printf("%d\n", ans);
    }
}