#include <iostream>

using namespace std;

typedef long long Long;
const Long MOD = Long(1e9 + 7);

Long pow(Long base, Long x) {
    if (x == 0) return 1;
    if (x % 2 == 1) return base * pow(base, x - 1) % MOD;
    Long y = pow(base, x / 2);
    return y * y % MOD;
}

int main() {
    int M, N; cin >> M >> N;
    cout << pow(M, N) << endl;
    return 0;
}