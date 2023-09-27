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
#define MAXN 64

typedef long long ll;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};
int pebble[MAXN];

int main(void) {
    int n, p;
    while (cin >> n >> p) {
        if (n == 0 && p == 0) break;
        int center = p, cur = 0;
        for (int i = 0; i < n; i++) pebble[i] = 0;
        while (1) {
            if (center == 0) {
                center += pebble[cur];
                pebble[cur] = 0;
            } else {
                pebble[cur]++;
                center--;
                if (pebble[cur] == p) {
                    cout << cur << endl;
                    break;
                }
            }
            cur = (cur+1) % n;
        }
    }
    return 0;
}