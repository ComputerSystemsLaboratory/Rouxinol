#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

void solve(vector<int> &A) {
    sort(A.begin(), A.end());
    int N = A.size();
    ll sum = 0;
    for(int i = 1; i < N - 1; i++) {
        sum += A[i];
    }
    cout << sum / (N - 2) << endl;
}

int main() {
    int N;
    while(cin >> N, N) {
        vector<int> A(N);
        for(int i = 0; i < N; i++) cin >> A[i];
        solve(A);
    }
    return 0;
}

