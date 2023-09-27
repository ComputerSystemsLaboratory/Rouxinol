#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
    ll N, sum_0 = 0;
    cin >> N;
    vector<ll> num(100001);
    for ( ll i = 0; i < N; i++ ) {
        ll a;
        cin >> a;
        sum_0 += a;
        num[a] ++; //数字が何個あるかカウントする
    }
    ll Q;
    cin >> Q;
    for ( ll i = 0; i < Q; i++ ) {
        ll b,c, dif;
        cin >> b >> c;
        dif = c - b;
        sum_0 += num[b] * dif;
        num[c] += num[b]; //bを全てcに変換しているのでbの数だけカウント数増やす
        num[b] = 0; //カウント数を0に
        cout << sum_0 << endl;
    }
}