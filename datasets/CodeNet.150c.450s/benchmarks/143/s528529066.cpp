#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main (){
    ll N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A.at(i);
    ll Q;
    cin >> Q;
    vector<ll> B(Q), C(Q);
    rep(i, Q){
        cin >> B.at(i) >> C.at(i);
    }
    int MAX = 100001; 
    vector<ll> S(Q);
    vector<int> count(MAX,0);
    rep(i, N){
        count.at(A.at(i))++;
    }

    long sum = 0;
    rep(i, N){
        sum += A.at(i);
    }

    rep(i, Q){
        int num = count.at(B.at(i));
        int diff = C.at(i)-B.at(i);
        count.at(B.at(i)) = 0;
        count.at(C.at(i)) += num;
        sum += diff * num;
        S.at(i) = sum;
    }

    rep(i, Q){
        cout << S.at(i) << endl;
    }
}