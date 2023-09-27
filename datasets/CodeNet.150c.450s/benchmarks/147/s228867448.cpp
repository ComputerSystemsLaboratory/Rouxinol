#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <bitset>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <iomanip>
#include <string>
#include <chrono>
#include <random>
#include <cmath>
#include <cassert>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <functional>
#include <sstream>

using namespace std;


int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n; 
    cin >> n;
    int mx = 101;

    auto calc = [&](int a, int b, int c) {
        int res = a * a + b * b + c * c + a * b + a * c + b * c;
        return res;
    };

    vector<int> cnts(n + 1, 0);
    for (int i = 1; i <= mx; ++i) {
        for (int j = 1; j <= mx; ++j) {
            for (int k = 1; k <= mx; ++k) {
                int N = calc(i, j, k);
                if (N <= n) {
                    ++cnts[N];
                }
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        cout << cnts[i] << '\n';
    }

    return 0;
}