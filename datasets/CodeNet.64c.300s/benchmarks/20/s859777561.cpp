#include <iostream>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long d;
    while (cin >> d) {
        long long sum = 0;
        for (int i=d; i<=600-d; i+=d) {
            sum += i * i * d;
        }
        cout << sum << "\n";
    }
    return 0;
}