#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <sstream>
#include <complex>
#include <ctime>
#include <cassert>
#include <functional>
#include <list>
#include <bitset>
#include <cfenv>
#include <numeric>
#include <utility>
#include <cstdio>
#include <fstream>
#include <deque>
#include <limits>
#include <climits>
using namespace std;
typedef pair<int, int> ii;

int main() {
    ios::sync_with_stdio(false);

    long long n;

    cin >> n;

    for(int i = n - 1; i > 1; i--) {
        n *= i;
    }

    cout << n << endl;

    return 0;
}