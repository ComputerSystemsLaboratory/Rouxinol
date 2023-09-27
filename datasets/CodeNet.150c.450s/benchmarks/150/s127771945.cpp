#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 2000005
#define MAXA 10005
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int N;
vi A, C, ans;

void solve(){
    C.resize(MAXA, 0);
    ans.resize(N+1);

    rep(i, N){
        C[A[i]]++;
    }

    rep(i, MAXA-1) C[i+1] += C[i];

    // rep(i, 6) cout << C[i] << endl;

    for(int i = N-1; i >= 0; --i){
        int val = A[i];
        // cout << "A: " << val << endl;
        ans[C[val]] = val;
        C[val]--;
        // cout << "C: " << C[val] << endl;
    }

    for(int i = 1; i <= N; ++i) {
        cout << ans[i];
        if(i == N) cout << endl;
        else cout << " ";
    }
}

int main(){
    cin >> N;
    A.resize(N);

    rep(i, N) cin >> A[i];

    solve();
}

