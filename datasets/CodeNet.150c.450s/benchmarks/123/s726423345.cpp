#include <iostream>
using namespace std;

bool IsPrime(int n) {
    for (int i=2; i*i<=n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return n != 1;
}

int main() {
    int i, n, tmp;
    int c = 0;

    cin >> n;
    for (i=0; i<n; i++) {
        cin >> tmp;
        if (IsPrime(tmp))
            c += 1;
    }
    cout << c << endl;
    return 0;
}