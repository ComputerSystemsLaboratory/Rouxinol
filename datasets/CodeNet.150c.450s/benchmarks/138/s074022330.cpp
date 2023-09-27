#include <algorithm>
#include <cmath>
#include <complex>
#include <cstdlib>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits.h>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <unordered_map>
#include <vector>

using namespace std;

int a, b;

int gcd(int x, int y) {
    if (x < y) {
        swap(x, y);
    }
    if (x % y == 0) {
        return y;
    }
    return gcd(x % y, y);
}

int main() {
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}