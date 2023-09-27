#include <iostream>
#include "algorithm"
#include "math.h"
#include "vector"

typedef long long ll;

using namespace std;

void print_v(vector<ll> tmp){
    for(int i=0; i<tmp.size(); i++){
        if(i) cout << " ";
        cout << tmp[i];
    }
    cout << endl;
}

int main(){

    while(1){
    int N, M; cin >> N >> M;
    if(!N && !M) break;
    vector<ll> h(N), w(M), sh(N+1), sw(M+1);
    for(int i=0; i<N; i++){
        cin >> h[i];
        sh[i+1] = sh[i]+h[i];
    }
    for(int i=0; i<M; i++){
        cin >> w[i];
        sw[i+1] = sw[i] + w[i];
    }

    // print_v(sh);
    // print_v(sw);


    vector<ll> sa;
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N+1; j++){
            sa.push_back(sh[j] - sh[i]);
        }
    }
    sort(sa.begin(), sa.end());
    // print_v(sa);

    ll ans = 0;
    for(int i=0; i<M; i++){
        for(int j=i+1; j<M+1; j++){
            ll tmp = sw[j] - sw[i];
            ll a = distance(sa.begin(), lower_bound(sa.begin(), sa.end(), tmp));
            ll b = distance(sa.begin(), upper_bound(sa.begin(), sa.end(), tmp));
            // cout << tmp << "," << a << "," << b << endl;
            ans += b - a;
        }
    }

    cout << ans << endl;
    }

    return 0;
}
