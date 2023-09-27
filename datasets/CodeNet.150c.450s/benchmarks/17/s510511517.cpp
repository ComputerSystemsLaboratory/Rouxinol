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
    int a[5];
    for (int i = 0; i < 5; i++) cin >> a[i];
    sort(a, a+5);
    cout << a[4];
    for (int i = 3; i >= 0; i--) {
        cout << " " << a[i];
    }
    cout << endl;
    return 0;
}