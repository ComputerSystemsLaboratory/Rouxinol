#include <iostream>
#include <cstring>
using namespace std;

const int MAX_P = 1000011;
bool is_prime[MAX_P];

int main() {
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for (int i = 0; i * i <= MAX_P; ++i) {
        if (!is_prime[i]) continue;
        for (int j = (i << 1); j < MAX_P; j += i) {
            is_prime[j] = false;
        }
    }
    
    int a, d, n;
    while (cin >> a >> d >> n, a || d || n) {
        int cnt = 0;
        for (int i = 0; i < MAX_P; i++) {
            const int x = a + d * i;
            if (is_prime[x]) {
                cnt++;
                if (cnt == n) {
                    cout << x << endl;
                    break;
                }
            }
        }
    }
    return 0;
}