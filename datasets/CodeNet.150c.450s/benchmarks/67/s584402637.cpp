#include <algorithm>
#include <cctype>
#include <cstdio>
#include <iostream>
#include <locale>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

int solve(int n) {
    int ans = 0;
    for (int sentou = 1; sentou < 1000; sentou++) {
        for (int kousuu = 2; kousuu < 1000; kousuu++) {
            if (kousuu * (2 * sentou + kousuu - 1) / 2 == n) {
                ans++;
                // cout << sentou << " " << kousuu << endl;
            }
        }
    }
    return ans;
}

int main(int argc, char const *argv[]) {
    cin.tie(0);

    int n;
    vector<int> ans;
    while (1) {
        cin >> n;
        if (n == 0) break;
        ans.push_back(solve(n));
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
}
