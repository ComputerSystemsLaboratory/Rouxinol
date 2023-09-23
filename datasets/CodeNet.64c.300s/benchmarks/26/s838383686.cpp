using namespace std;

template <typename T>
T power(T x, T p, T mod) {
    T y = 1;
    T tmp = x;
    while (p > 0) {
        if (p % 2 == 1) {
            y = y * tmp % mod;
        }
        tmp = tmp * tmp % mod;
        p >>= 1;
    }
    return y;
}

#include <iostream>
int main() {
    unsigned long long m, n;
    cin >> m >> n;
    cout << power<unsigned long long>(m, n, 1000000007) << endl;
    return 0;
}