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

int read_problem()
{
    int n;
    scanf("%d\n", &n);
    return n;
}

#if 0
constexpr int SQRTN_MAX = 31622; // sqrt(1e9) = 31622.77...

array<bool, SQRTN_MAX+1> is_prime;

void init_prime_table()
{
    fill(is_prime.begin(), is_prime.end(), true);
    is_prime[0] = is_prime[1] = false;

    for(int i = 2; i <= SQRTN_MAX; ++i) {
        if(!is_prime[i]) continue;

        for(int j = 2*i; j <= SQRTN_MAX; j += i) {
            is_prime[j] = false;
        }
    }
}
#endif

void factor_one(int& n, int k, vector<int>& facs)
{
    while(n % k == 0) {
        facs.push_back(k);
        n /= k;
    }
}

vector<int> factor(int n)
{
    vector<int> result;

    int sqrtn = static_cast<int>(sqrt(n));
    for(int i = 2; i <= sqrtn; ++i) {
        factor_one(n, i, result);
    }
    if(n != 1)
        result.push_back(n);

    return result;
}

vector<int> factor2(int n)
{
    vector<int> result;

    // 2?????????3??§?????????????????????
    factor_one(n, 2, result);
    factor_one(n, 3, result);

    // 2?????????3????????°?????????????????¨ 6n?±1???????????§??????????????°??????
    int sqrtn = static_cast<int>(sqrt(n));
    for(int i = 6; i-1 <= sqrtn; i += 6) {
        factor_one(n, i-1, result);
        factor_one(n, i+1, result);
    }
    if(n != 1)
        result.push_back(n);

    return result;
}

int main()
{
    int n = read_problem();

    vector<int> facs = factor2(n);
    printf("%d:", n);
    for(int p : facs) {
        printf(" %d", p);
    }
    puts("");

    return 0;
}