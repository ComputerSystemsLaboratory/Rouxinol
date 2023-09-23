#include <iostream>

using namespace std;

int memo[100];

int fibonacci(int n) {
    if (memo[n] != -1) {
        return memo[n];
    }
    if (n == 0) { return 1; }
    if (n == 1) { return 1; }
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

int main() {
    int n;
    cin >> n;
    fill(memo, memo + 100, -1);
    cout << fibonacci(n) << endl;
}