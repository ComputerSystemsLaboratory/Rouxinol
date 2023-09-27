#include <bits/stdc++.h>
using namespace std;
const long long int INF =  1LL<<60; 
int main() {
    while(true) {
        int N, K;
        cin >> N >> K;
        if(N == 0 && K == 0) {
            break;
        }
        vector<int> a(N);
        for(int i = 0; i < N; i++) {
            cin >> a[i];
        }
        int max = 0;
        vector<int> s(N+1);
        for(int i = 0; i < N; i++) {
            s[i+1] = s[i] + a[i];
        }
        long long int res = -INF;
        for(int i = 0; i+K <= N; i++) {
            long long int value = s[i+K] - s[i];
            if(res < value) {
                res = value;
            }
        }
            cout << res << endl;
    }
    return 0;
}
