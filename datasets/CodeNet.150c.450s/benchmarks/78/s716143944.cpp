#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    const int n = 1000000;
    vector<int> pyramid_nums;
    int k = 1;
    while(true) {
        int num = k*(k+1)*(k+2) / 6;
        if(num >= n) break;
        pyramid_nums.push_back(num);
        k++;
    }
    vector<int> dp;
    dp.push_back(0);
    for(int k = 1; k < n; ++k) {
        int elem = k;
        for(int p_num : pyramid_nums) {
            if(p_num > k) break;
            if(elem > dp[k - p_num] + 1) elem = dp[k - p_num] + 1;
        }
        dp.push_back(elem);
    }
    vector<int> dp_odd;
    dp_odd.push_back(0);
    for(int k = 1; k < n; ++k) {
        int elem = k;
        for(int p_num : pyramid_nums) {
            if(p_num % 2 == 0) continue;
            if(p_num > k) break;
            if(elem > dp_odd[k - p_num] + 1) elem = dp_odd[k - p_num] + 1;
        }
        dp_odd.push_back(elem);
    }
    while(true) {
        int q; cin >> q;
        if(q == 0) break;
        cout << dp[q] << ' ' << dp_odd[q] << endl;
    }
    return 0;
}

// [Problem] Pollock's conjecture
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1167&lang=jp
