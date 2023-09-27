#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main() {
    string field;
    cin >> field;
    int height = 0;
    stack<pair<int, int>> downs;
    vector<pair<pair<int, int>, int>> pools;
    int sum_vol = 0;
    for (int i = 0; i < field.size(); i++) {
        switch (field[i]) {
        case '/':
            if (downs.empty()) {
                continue;
            } else {
                int left = downs.top().first;
                downs.pop();
                pair<pair<int, int>, int> p(make_pair(left, i), i - left);
                sum_vol += i - left;
                while (!pools.empty()
                       && left < pools.back().first.first
                       && pools.back().first.second < i) {
                    int vol = pools.back().second;
                    pools.pop_back();
                    p.second += vol;
                }
                pools.push_back(p);
            }
            break;
        case '\\':
            downs.push(make_pair(i, height--));
            break;
        case '_':
            break;
        }
    }
    sort(begin(pools), end(pools));
    cout << sum_vol << endl;
    cout << pools.size();
    for (auto p : pools) {
        cout << " " << p.second;
    }
    cout << endl;
}