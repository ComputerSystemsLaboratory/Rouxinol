#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using ll = long long;
using namespace std;
using P = pair<int,int>;

ll N, K, A[1 << 18];

int main(){
    cin >> N >> K;
    for(int i = 1; i <= N; i++){
        cin >> A[i];
    }
    for(int i = K + 1; i <= N; i++){
        if(A[i - K] < A[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}