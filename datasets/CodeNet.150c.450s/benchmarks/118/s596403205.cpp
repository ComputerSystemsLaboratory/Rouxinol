#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
using namespace std;
#define INF 100000000

typedef long long ll;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

int main(void) {
    int n;
    cin >> n;
    while (n--) {
        int y, m, d;
        cin >> y >> m >> d;
        // year
        int year = 0;
        for (int i = y+1; i < 1000; i++) {
            if (i % 3 == 0) {
                year += 200;
            } else {
                year += 195;
            }
        }
        // month
        int month = 0;
        for (int i = m+1; i <= 10; i++) {
            if (y % 3 == 0 || i % 2 == 1) {
                month += 20;
            } else {
                month += 19;
            }
        }
        // day
        int day = 0;
        if (m % 2 == 1 || y % 3 == 0) day = 20-d;
        else day = 19-d;
        cout << year+month+day+1 << endl;
    }
    return 0;
}