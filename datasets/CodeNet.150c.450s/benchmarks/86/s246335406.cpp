#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;
int main(){
    while(1){
        ll N, M, P;
        cin >> N >> M >> P;
        if(!N && !M && !P) break;
        M--;
        ll po[N];
        for(ll i = 0; i < N; i++) cin >> po[i];
        ll yo = 0;
        for(ll i = 0; i < N; i++) yo += po[i];
        yo *= 100;
        cout << (po[M] ? yo * (100 - P) / (100 * po[M]) : 0) << endl;
    }
    return 0;
}
