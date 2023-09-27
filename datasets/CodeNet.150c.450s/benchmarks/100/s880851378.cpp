#include <iostream>

using namespace std;

typedef long long LL;

LL fact(int);

int main() {
    int n;
    cin >> n;
    cout << fact(n) << "\n";
    return 0;
}

LL fact(int n) {
    if (n == 1) 
        return 1;
    return fact(n-1) * n;
}