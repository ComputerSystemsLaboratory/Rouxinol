#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N, K;
    cin >> N >> K;
    
    vec<int> A(N);
    rep(i, N) cin >> A[i];

    for(int i=0;i<N-K;++i){
        if(A[K+i]>A[i]){
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }
}
