#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <algorithm>
#include <utility>
#include <list>
#include <tuple>
#include <map>
#include <stack>
#include <queue>
#include <string>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::vector;

int evaluation(const vector<int>& c, const vector<vector<int>>& s, const vector<int>& last, int day, int t) {
    int result = s[day - 1][t - 1];
    for (int i = 0, size = c.size(); i < size; i++) {
        result -= c[i] * (day - last[i]);
    }
    return result;
}

int main() {
    int d;
    cin >> d;

    vector<int> c(26);
    vector<vector<int>> s(d, vector<int>(26));
    vector<int> t(d);
    vector<int> last(26, 0);

    for (auto&& v : c) {
        cin >> v;
    }
    for (auto&& vec : s) {
        for (auto&& v : vec) {
            cin >> v;
        }
    }
    for (auto&& v : t) {
        cin >> v;
    }

    int score = 0;
    for (int i = 0; i < d; i++) {
        last[t[i] - 1] = i + 1;
        score += evaluation(c, s, last, i + 1, t[i]);
        cout << score << endl;
    }
    return 0;
}