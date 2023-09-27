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
    double a, b, c, d, e, f, x, y;
    while (cin >> a >> b >> c >> d >> e >> f) {
        y = (f - c * d / a) / (e - b * d / a);
        x = (c - b * y) / a;
        int inty = y * 10000;
        int intx = x * 10000;
        if (intx % 10000 >= 5) x = (intx + 5) / (10000.0);
        if (inty % 10000 >= 5) y = (inty + 5) / (10000.0);
        printf("%.3f %.3f\n", x, y);
    }
    return 0;
}