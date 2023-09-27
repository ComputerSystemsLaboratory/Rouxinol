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
    int N;
    while (1) {
        cin >> N;
        if (N == 0) break;
        int ans = 0;
        for (int i = 1; i <= N/2; i++) {
            int sum = i, plus = i;
            while (sum < N) {
                plus++;
                sum += plus;
            }
            if (sum == N) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}