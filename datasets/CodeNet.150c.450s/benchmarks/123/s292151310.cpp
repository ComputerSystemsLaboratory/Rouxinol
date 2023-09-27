#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n == 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int div = 3; div <= int(sqrt(n)); div += 2) {
        if (n % div == 0) return false;
    }
    return true;
}

int main(void) {
    int n, m, ret = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (isPrime(m)) ret++;
    }
    cout << ret << endl;
    return 0;
}