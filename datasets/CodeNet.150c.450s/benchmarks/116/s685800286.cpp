#include<bits/stdc++.h>
using namespace std;

template<typename T>
struct CumulativeSum {
    vector<T> s;
    CumulativeSum(const vector<T> &nums) {
        int n = nums.size();
        s.resize(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            s[i + 1] = s[i] + nums[i];
        }
    }
    // [l, r), l and r is 0-indexed.
    T sum(int l, int r) {
        return s[r] - s[l];
    }
};

/*
    verified https://onlinejudge.u-aizu.ac.jp/problems/0516
*/
int main() {
    int n, k;
    vector< long long > ress;
    while (cin >> n >> k) {
        if (n == 0) break;
        vector<long long> nums(n);
        for (int i = 0; i < n; ++i) cin >> nums[i];
        CumulativeSum<long long> cs(nums);
        long long res = numeric_limits<long long>::min();
        for (int i = 0; i <= n - k; ++i) {
            long long val = cs.sum(i, i + k);
            res = max(res, val);
        }
        ress.push_back(res);
    }
    for (long long res : ress) cout << res << endl;
}

