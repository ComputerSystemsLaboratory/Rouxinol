#include <iostream>
#include <vector>
using namespace std;

#define repeat(n, i) for(int i=0;i<(n);i++)

int n, k;
vector<int> a;

int solve() {
    int sum = 0, prev_sum = 0;
    for (int i = 0; i < k; i++) {
        prev_sum += a[i];
    }
    int max_sum = prev_sum;
    for (int i = 1; i + k - 1 < n; i++) {
        sum = prev_sum - a[i-1] + a[i+k-1];
        if (max_sum < sum) max_sum = sum;
        prev_sum = sum;
    }
    return max_sum;
}

int main() {
    while (cin >> n >> k) {
        if (n == 0 && k == 0) break;
        a.clear();
        repeat(n, i) {
            int _a; cin >> _a;
            a.push_back(_a);
        }
        cout << solve() << endl;
    }
    return 0;
}