#include <array>
#include <vector>
#include <deque>
#include <set>
#include <string>
#include <algorithm>
#include <numeric>
#include <functional>
#include <iterator>
#include <limits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cstdint>
#include <cassert>

using namespace std;

#define FOR(i, start, end) for(int i = (start); i < (end); ++i)
#define REP(i, n) FOR(i, 0, n)

void read_problem(int& m, int& n)
{
    scanf("%d %d\n", &m, &n);
}

constexpr int MODULO = 1000000007;

int pow_modulo(int m, int n, int mod)
{
    if(n == 0) return 1;

    long result = pow_modulo(m, n/2, mod);
    result = result * result % mod;
    if(n % 2)
        result = m * result % mod;

    return result;
}

int main()
{
    int m, n;
    read_problem(m, n);

    int result = pow_modulo(m, n, MODULO);
    printf("%d\n", result);

    return 0;
}