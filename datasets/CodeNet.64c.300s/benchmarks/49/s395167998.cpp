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

int main(void) {
    int a, b;
    while (cin >> a >> b) {
        int tmp = a + b;
        int ans = 0;
        while (tmp) {
            tmp /= 10;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}