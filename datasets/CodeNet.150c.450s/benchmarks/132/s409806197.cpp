#include <iostream>
#include <vector>

using namespace std;

bool ok(vector<int> &K, int now) {
    if (now != 0) return false;
    int cnt = 0;
    for(int i = 0; i < K.size(); i++) {
        if (K[i] != 0) cnt++;
    }
    return cnt == 1;
}

void solve(int N, int P) {
    vector<int> K(N);
    int now = P;
    int now_i = 0;
    while(!ok(K, now)) {
        if (now == 0) {
            now = K[now_i];
            K[now_i] = 0;
        } else {
            K[now_i]++;
            now--;
        }
        now_i = (now_i + 1) % N;
    }
    cout << (now_i + N - 1) % N << endl;
}

int main() {
    int N, P;
    while(cin >> N >> P, N) {
        solve(N, P);
    }
    return 0;
}
