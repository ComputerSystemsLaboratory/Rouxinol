#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX_N = 44;

int main() {
    vector<int> fib(MAX_N + 1);
    fib[0] = 1;
    fib[1] = 1;
    for(int i = 2; i <= MAX_N; i++) fib[i] = fib[i - 1] + fib[i - 2];
    int N; cin >> N;
    cout << fib[N] << endl;
}