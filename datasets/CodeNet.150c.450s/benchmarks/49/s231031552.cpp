#include <algorithm>
#include <cstdio>
#include <numeric>
#include <vector>
#define repeat(i, n) for (int i = 0; (i) < int(n); ++(i))
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)
using namespace std;

int main() {
    while (true) {
        int n; scanf("%d", &n);
        if (n == 0) break;
        vector<int> a(n); repeat (i, n) scanf("%d", &a[i]);
        whole(sort, a);
        int result = (whole(accumulate, a, 0) - a.front() - a.back()) / (n - 2);
        printf("%d\n", result);
    }
    return 0;
}