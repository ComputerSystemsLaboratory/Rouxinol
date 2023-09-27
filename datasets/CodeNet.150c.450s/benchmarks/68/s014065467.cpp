#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    while (cin >> n, n != 0) {
        vector<int> a(n);
        for (int& x : a) {
            cin >> x;
        }

        sort(a.begin(), a.end());

        int mini = 1 << 25;

        for (int i = 0; i < n - 1; ++i) {
            mini = min(mini, abs(a[i + 1] - a[i]));
        }

        cout << mini << endl;
    }
}