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


    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        vector<long long> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }
        string s;
        cin >> s;

        int res = s.back() - '0';
        if (res == 0){
            vector<long long> X;
            for (int i = n - 1; i >= 0; --i) {
                long long x = A[i];
                for (auto y : X) {
                    x = min(x, x ^ y);
                }
                if (x != 0) {
                    if (s[i] == '1') {
                        res = 1;
                        break;
                    }
                    X.push_back(x);
                }
                for (int i = (int) X.size() - 2; i >= 0; --i) {
                    if (X[i] < X[i + 1]) {
                        swap(X[i], X[i + 1]);
                    } else {
                        break;
                    }
                }
            }
        }
        cout << res << '\n';
    }
    return 0;
}