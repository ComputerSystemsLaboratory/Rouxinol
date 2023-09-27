#include <algorithm>
#include <cmath>
#include <ctime>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include <cstring>
#include <tuple>
#include <bitset>
#include <unordered_map>
using namespace std;
typedef long long ll;

int const SIZ = 50;
int fib[SIZ];

void prepare() {
    fib[0] = fib[1] = 1;
    for (int i=2; i<SIZ; ++i) {
        fib[i] = fib[i-1] + fib[i-2];
    }
}

int main() {
    ios::sync_with_stdio(false);

    prepare();

    int n;
    cin >> n;
    cout << fib[n] << endl;

    return 0;
}