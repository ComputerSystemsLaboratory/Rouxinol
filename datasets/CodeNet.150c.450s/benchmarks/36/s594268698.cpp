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

int f(int n) {
    return n * n;
}

int main(void) {
    int n;
    while (cin >> n) {
        int ans = 0;
        for (int i = 0; i * n < 600; i++) {
            ans += f(i*n) * n;
        }
        cout << ans << endl;
    }
    return 0;
}