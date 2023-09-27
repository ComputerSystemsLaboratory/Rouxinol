#include <bits/stdc++.h>

using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;
long long dp[100100];

int main() {
    int N; cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
        if(i != N-1) cout << A[i] << " ";
        else cout << A[i] << endl;
    }

    int v, j;
    for(int i = 1; i < N; i++) {
        v = A[i];
        j = i - 1;
        while(j >= 0 && A[j] > v) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
        for(int k = 0; k < N; k++) {
            if(k != N-1) cout << A[k] << " ";
            else cout << A[k] << endl;
        }
    }

    return 0;
}
