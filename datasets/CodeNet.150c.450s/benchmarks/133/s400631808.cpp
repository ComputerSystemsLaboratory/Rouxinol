#include <bits/stdc++.h>
using namespace std;
int D;
int c[27], s[366][27];
int last[27];
long long ans = 0;
int main(){
    scanf("%d",&D);
    for (int i = 1; i <= 26; i++) scanf("%d",&c[i]);
    for (int i = 1; i <= D; i++){
        for (int j = 1; j <= 26; j++) scanf("%d",&s[i][j]);
    }
    for (int i = 1; i <= D; i++){
        int t;
        scanf("%d",&t);
        ans += s[i][t];
        last[t] = i;
        for (int j = 1; j <= 26; j++){
            ans -= c[j]*(i-last[j]);
        }
        printf("%lld\n",ans);
    }

}
