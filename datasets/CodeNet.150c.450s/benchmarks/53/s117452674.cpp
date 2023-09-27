#include<iostream>
using namespace std;

void compute(int n) {
    if (n == 1) return;
    if (n % 2 == 0) {
        cout << " " << 2;
        compute(n/2);
        return;
    }
    for (int i = 3; i * i <= n; i += 2 ) {
        if (n % i == 0) {
            cout << " " << i;
            compute(n/i);
            return;
        }
    }
    cout << " " << n;
    return;
}

int main() {
    int n;
    cin >> n;
    cout << n << ":";
    compute(n);
    cout << endl;
    return 0;
}
