#include <iostream>

using namespace std;

typedef unsigned long long ull;

ull fact (int n) {
    if (n < 2) return 1;
    else return (ull)n * fact(n - 1);
}

int main (void) {
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}