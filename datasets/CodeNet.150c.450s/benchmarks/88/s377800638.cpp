#include <algorithm>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <locale>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace std;

pair<int, int> solve(int h, int w) {
    pair<int, int> ans = make_pair(INT_MAX, INT_MAX);
    int rute           = INT_MAX;
    long product       = w * w + h * h;
    for (int i = 1; i <= 150; i++) {
        for (int j = 1; j <= 150; j++) {
            if (product < i * i + j * j && i < j) {
                if (rute > i * i + j * j) {
                    rute = i * i + j * j;
                    ans  = make_pair(i, j);
                } else if (rute == i * i + j * j) {
                    if (ans.first > i && i < j) {
                        ans = make_pair(i, j);
                    }
                }
            } else if (product == i * i + j * j && i < j) {
                if (h < i) {
                    ans  = make_pair(i, j);
                    rute = i * i + j * j;
                    return ans;
                }
            }
        }
    }
    // pair<int, int> a = make_pair(-1, -1);
    return ans;
}

int main() {
    int w, h;
    vector<pair<int, int>> ans;
    while (1) {
        cin >> h >> w;
        if (!w && !h) break;
        ans.push_back(solve(h, w));
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}

/*
    for ( ; product < 150 * 150; product++) {
        for (int higth = 1; higth < product; higth++) {
                int val  = product - (higth * higth);
                int rute = sqrt(val);
                if (rute != 0) {
                    // cout << 1 << endl;
                    if (val / rute == rute && val % rute == 0) {
                        if (rute > higth) {
                            ans = make_pair(higth, rute);
                            return ans;
                        }
                    }
                }
        }
    }
*/
