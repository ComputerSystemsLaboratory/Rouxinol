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
    int n, r;
    while (cin >> n >> r) {
        if (n == 0 && r == 0) break;
        int card[n];
        for (int i = 0; i < n; i++) {
            card[i] = n-i;
        }
        for (int i = 0; i < r; i++) {
            int p, c;
            cin >> p >> c;
            p--;
            int buf[n];
            int ue[n];
            int cur = 0;
            for (int j = 0; j < n; j++) {
                if (j < p || j >= p+c) {
                    buf[cur] = card[j];
                    cur++;
                }
            }
//            for (int j = 0; j < cur; j++) cout << buf[j] << " ";
//            cout << endl;
            for (int j = 0; j < c; j++) {
                ue[j] = card[p+j];
            }
            for (int j = 0; j < c; j++) card[j] = ue[j];
            for (int j = c; j < n; j++) card[j] = buf[j-c];
        }
//        for (int i = 0; i < n; i++) cout << card[i] << " ";
//        cout << endl;
        cout << card[0] << endl;
    }
    return 0;
}