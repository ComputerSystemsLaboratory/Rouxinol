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
typedef long long ll;
ll fib[50];
ll dfs(int n) {
    if (fib[n] > 0) return fib[n];
    if (n == 0 || n == 1) return 1;
    return fib[n] = dfs(n-1) + dfs(n-2);
}
int main(void) {
    int n;
    cin >> n;
    cout << dfs(n) << endl;
    return 0;
}