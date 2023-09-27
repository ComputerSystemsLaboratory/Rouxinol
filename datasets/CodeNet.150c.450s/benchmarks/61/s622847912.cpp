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

const int MAXN = 100;
int Y[MAXN];
int N, A, B, C, X;

int main(void) {
    while (cin >> N >> A >> B >> C >> X) {
        if ((N | A | B | C | X) == 0) break;
        for (int i = 0; i < N; i++) cin >> Y[i];
        int i = 0, cur = 0;
        while (1) {
            if (X == Y[cur]) cur++;
            if (cur == N) break;
            X = (A*X+B) % C;
            i++;
            if (i > 10000) break;
        }
        if (i > 10000) cout << -1 << endl;
        else cout << i << endl;
    }
    return 0;
}