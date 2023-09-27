#include <iostream>
using namespace std;

long long ways[31];

long long howManyWays(int n) {
    if (ways[n]) {
        return ways[n];
    }
    if (n <= 0) {
        return ways[0] = 1;
    } else if (n == 1) {
        return ways[1] = howManyWays(0);
    } else if (n == 2) {
        return ways[2] = howManyWays(1) + howManyWays(0);
    } else {
        return ways[n] = howManyWays(n - 1) + howManyWays(n - 2) + howManyWays(n - 3);
    }
}

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        long long way = howManyWays(n);
        cout << way / 3650 + 1 << endl;
    }
}