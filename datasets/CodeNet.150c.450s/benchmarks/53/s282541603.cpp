#include <iostream>
using namespace std;

bool is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n; cin >> n;
    cout << n << ':';
    if (is_prime(n)) {
        cout << " " << n << endl;
        return 0;
    }
    int i = 2;
    while (n > 1) {
        if (n % i == 0) {
            cout << " " << i;
            n /= i;
        } else {
            i++;
        }
    }
    cout << endl;
}
