#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int fib[45] = {};
    fib[0] = fib[1] = 1;

    int n;
    cin >> n;
    if (n < 2) {
        cout << fib[n] << endl;
    } else {
        for (int i = 2; i <= n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        cout << fib[n] << endl;
    }

    return 0;
}