#include <iostream>

using namespace std;

int solve(int n) {
    int total = 0;
    int count = 0;
    for (int i = 1, j = 1; i < n; ++i) {
        while (total < n) {
            total += j;
            ++j;
        }
        if (total == n) {
            ++count;
        }
        total -= i;
    }
    return count;
}

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            return 0;
        }
        cout << solve(n) << endl;
    }
}