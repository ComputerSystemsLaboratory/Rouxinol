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
    int e;
    while (1) {
        cin >> e;
        if (e == 0) break;
        int m = INF;
        for (int z = 0; z <= 100; z++) {
            for (int y = 0; y <= 1000; y++) {
                if (y * y + z * z * z > e) continue;
                int x = e - y*y - z*z*z;
                m = min(x+y+z, m);
            }
        }
        cout << m << endl;
    }
    return 0;
}