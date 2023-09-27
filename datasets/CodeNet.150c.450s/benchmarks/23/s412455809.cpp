/* 以下は動的計画法を用いずにナイーブに書いたプログラム
#include<iostream>
using namespace std;

int fib(int n) {
    if (n == 0 || n == 1) return 1;
    else return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;

    return 0;
}
*/

#include<iostream>
using namespace std;

int fib[45] = {0};

void solve(int n) {
    if (n == 0 || n == 1) {
        fib[n] = 1;
        return;
    }
    if (fib[n - 2] == 0) solve(n - 2);
    if (fib[n - 1] == 0) solve(n - 1);
    fib[n] = fib[n - 1] + fib[n - 2];
    return;
}

int main() {
    int n;
    cin >> n;
    solve(n);
    cout << fib[n] << endl;
}
