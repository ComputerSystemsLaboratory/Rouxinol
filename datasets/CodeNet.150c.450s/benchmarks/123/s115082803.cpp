#include <iostream>
#include <array>
#include <cmath>

using namespace std;

bool IsPrime(int n) {
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int len;
    cin >> len;
    array<int, 10000> src;

    for (int i = 0; i < len; i++) {
        cin >> src[i];
    }
    
    int primeNumCount = 0;
    for (int i = 0; i < len; i++) {
        if (IsPrime(src[i])) primeNumCount++;
    }

    cout << primeNumCount << endl;

    return 0;
}