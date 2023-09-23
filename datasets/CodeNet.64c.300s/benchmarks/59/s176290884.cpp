//Prime Numbers
#include <iostream>
#include <cmath>

using namespace std;

bool isPrimeNumber(int n) {
    bool prime = true;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            prime = false;
            break;
        }
    }
    return prime;
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

