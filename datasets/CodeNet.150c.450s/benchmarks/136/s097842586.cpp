#include "bits/stdc++.h"
using namespace std;

long long int GCD(long long int a, long long int b) {
    return (b % a == 0) ? a : GCD(b % a, a);
}

long long int LCM(long long int a, long long int b) {
    return (a / GCD(a, b)) * b;
}

int main() {
    long long int a, b;
    while (cin >> a >> b) {
        cout << GCD(a, b) << " " << LCM(a, b) << endl;
    }    
    return 0;
}
