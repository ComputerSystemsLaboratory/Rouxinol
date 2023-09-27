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
int main() {
    ios::sync_with_stdio(false);

    vector<int> fib(50);
    fib[0] = fib[1] = 1;
    for (int i=2; i<50; ++i) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    int n;
    cin >> n;
    cout << fib[n] << endl;

    return 0;
}