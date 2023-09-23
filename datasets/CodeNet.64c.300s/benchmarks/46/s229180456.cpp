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
#define MAX 1000000

typedef long long ll;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

bool prime[MAX+1];

void hurui(void) {
    for (int i = 0; i <= MAX; i++) prime[i] = true;
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (prime[i]) {
            for (int j = 2; i * j <= MAX; j++) {
                prime[i*j] = false;
            }
        }
    }
}

int main(void) {
    hurui();
    int a, d, n;
    while (cin >> a >> d >> n) {
        if (a == 0 && d == 0 && n == 0) break;
        int cur = 1;
        while (1) {
            if (prime[a]) {
                if (cur == n) {
                    cout << a << endl;
                    break;
                } else {
                    cur++;
                }
            }
            a += d;
        }
    }
    return 0;
}