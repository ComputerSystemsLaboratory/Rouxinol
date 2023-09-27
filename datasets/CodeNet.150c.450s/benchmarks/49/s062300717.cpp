#include <iostream>
#include <cstdio>
#include <cstring>
#include <climits>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <sstream>
using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;

const int MAX_s = 1005;
int n, m, M, S, s;

int main() {
    while(true) {
        cin >> n;
        if(n == 0) {
            break;
        }

        S = 0;
        m = MAX_s;
        M = 0;
        for(int i = 0; i < n; i++) {
            cin >> s;
            S += s;
            m = min(m, s);
            M = max(M, s);
        }

        cout << (int)((S - m - M) / (n - 2)) << endl;
    }

    return 0;
}