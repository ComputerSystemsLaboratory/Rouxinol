//
// Created by yushi hosokawa on 2020/05/28.
//
#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define MAX 100000

//グローバル変数でn,k wを定義。すると関数で参照で渡して値を使える
int n ,k;
vector <ll> w(MAX);


int check(ll P){
    int i = 0;
    for(int j = 0; j <k;j++){
        ll s = 0;
        while(s+w[i]<= P){
            s += w[i];
            i++;
            if(i == n)return n; //全ての荷物をつめたら n=荷物の値 を返す
        }
    }
    return i; //すべての荷物を返せなかったら載せられた数だけ返す
}

int solve(){
    ll left = 0;
    ll right = 10000*100000;
    ll mid ;
    while(right - left > 1){
        mid = (left +right)/2;
        int v = check(mid);
        if(v>=n)right = mid;
        else left = mid;
    }
    return right;
}


int main() {

    cin >>n>>k;
    rep(i,n){
        cin>>w.at(i);
    }
    ll ans = solve();
    cout <<ans<<endl;


}

