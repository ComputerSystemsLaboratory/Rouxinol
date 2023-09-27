#include <iostream>
#include <cstdio>
#include <cassert>
#include <cstring>
#include <vector>
#include <valarray>
#include <array>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <complex>
#include <random>
#include <bitset>

using namespace std;
typedef long long ll;

set<string> s;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string ss;
        cin >> ss;
        s.insert(ss);
    }
    int m;
    cin >> m;
    bool now = false;
    for (int i = 0; i < m; i++) {
        string a;
        cin >> a;
        if (s.count(a)) {
            now = !now;
            if (now) {
                cout << "Opened by " << a << endl;
            } else {
                cout << "Closed by " << a << endl;
            }
        } else {
            cout << "Unknown " << a << endl;
        }
    }
    return 0;
}