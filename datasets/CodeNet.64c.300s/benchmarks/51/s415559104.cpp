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
using namespace std;
#define INF 1000000000
typedef long long ll;
ll memo[25];

ll dfs(int n) {
    if (memo[n] > 0) return memo[n];
    if (n == 0 || n == 1) return 1;
    else return memo[n] = n * dfs(n-1);
}

int main(void) {
    int n;
    cin >> n;
    cout << dfs(n) << endl;
    return 0;
}