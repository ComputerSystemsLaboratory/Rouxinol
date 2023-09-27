#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int MX = 1000000;
bool prime[MX];
int cnt[MX];

int main() {
    for (int i=0; i<MX; ++i) prime[i] = true;
    prime[0] = prime[1] = false;
    for (int i=2; i<MX; ++i) {
        if ( ! prime[i]) continue;
        for (int j=i; (long long)i*j<MX; ++j) {
            prime[i*j] = false;
        }
    }
    cnt[0] = 0;
    for (int i=1; i<MX; ++i) {
        cnt[i] = cnt[i-1] + prime[i];
    }
    int N;
    while (cin >> N) {
        cout << cnt[N] << endl;
    }
    return 0;
}