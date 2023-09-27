//Prime Numbers
#include <iostream>
#include <cmath>

using namespace std;

bool isPrimeNumber(int n) {
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i <= sqrt(n); i += 2) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int N, n, cnt = 0;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> n;
        if(isPrimeNumber(n)) cnt++;
    }
    cout << cnt << endl;
}

