#include <bits/stdc++.h>
using namespace std;
int main() {
    long long sum= 0;
    vector<int> d(100001,0);
    int N, Q;
    cin >> N;
    vector<int>A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        sum += A[i];
        d[A[i]] ++;
    }
    cin >> Q;
    int B, C;
    for (int i = 0; i < Q; i++) {
        cin >> B >> C;
        sum += d[B]*(C - B);
        d[C] += d[B];
        d[B] = 0;
        cout << sum << endl;
    }
    
}

