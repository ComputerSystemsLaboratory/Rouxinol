#include <iostream>
using namespace std;

int isPrime(int n) {
    int i;
    if (n < 2) return 0;
    else if (n == 2) return 1;
    if (n%2 == 0) return 0;
    for (i = 3; i <= n/i; i+=2) {
        if (n%i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, m, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (isPrime(m)) count++;
    }
    cout << count << endl;
    return 0;
}