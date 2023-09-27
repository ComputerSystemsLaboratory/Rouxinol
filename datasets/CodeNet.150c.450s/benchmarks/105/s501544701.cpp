#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template <class T, class U> using Pa = pair<T, U>;
template <class T> using vec = vector<T>;
template <class T> using vvec = vector<vec<T>>;

void solve(){
    int N;
    cin >> N;
    vec<ll> A(N);
    for(auto& x:A) cin >> x;
    string S;
    cin >> S;
    vec<ll> base;
    for(int i=N-1;i>=0;i--){
        ll a = A[i];
        for(auto& b:base) a = min(a,b^a);
        if(S[i]=='1'){
            if(a){
                cout << 1 << "\n";
                return ;
            }
        }else{
            base.push_back(a);
        }
    }
    cout << 0 << "\n";
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    while(T--){
        solve();
    }
}