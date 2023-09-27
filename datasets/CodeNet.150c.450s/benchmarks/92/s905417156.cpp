#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        int c = a + b;
        int res = 0;
        if (c == 0) {
            cout << 1 << endl;
            continue;
        }
        while (c) {
            c /= 10;
            res ++;
        }
        cout << res << endl;
    }
    return 0;
}