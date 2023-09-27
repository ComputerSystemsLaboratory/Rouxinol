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

int a[4];
int b[4];

int main(void) {
    while (cin >> a[0] >> a[1] >> a[2] >> a[3]) {
        for (int i = 0; i < 4; i++) {
            cin >> b[i];
        }
        int hit = 0, blow = 0;
        for (int i = 0; i < 4; i++) {
            if (a[i] == b[i]) hit++;
        }
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (a[i] == b[j]) {
                    blow++;
                }
            }
        }
        blow -= hit;
        cout << hit << " " << blow << endl;
    }
    return 0;
}