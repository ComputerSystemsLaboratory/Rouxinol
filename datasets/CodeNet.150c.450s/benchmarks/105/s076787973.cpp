#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 200 + 10;
ll a[maxn];

const int L = 63;
ll d[L];
bool add(ll x){
    for(int i = L - 1; i >= 0; i--) if(x & 1ll << i){
        if(d[i] == -1){d[i] = x; return true;}
        x ^= d[i];
    }
    return false;
}

int main(){
//    Fast;
    int t; scanf("%d", &t); while(t--){
        memset(d, -1, sizeof d);

        int n; scanf("%d", &n);
        for(int i = 0; i < n; i++) scanf("%lld", a + i);
        char s[maxn]; scanf("%s", s);
        int flag = 0;
        for(int i = n - 1; i >= 0; i--){
            if(add(a[i]) && s[i] == '1'){
                flag = 1;
                break;
            }
        }
        printf("%d\n", flag);
    }
    return 0;
}

