/**
 * ?????°????????£????????????????????????????????????????°??????????????????????
 */

#include <vector>
#include <deque>
#include <string>
#include <algorithm>
#include <numeric>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cassert>

using namespace std;

#define FOR(i, start, end) for(int i = (start); i < (end); ++i)
#define REP(i, n) FOR(i, 0, n)


void read_problem(vector<int>& a, vector<int>& ms)
{
    int n;
    scanf("%d\n", &n);

    a.resize(n);
    REP(i, n) {
        scanf("%d", &a[i]);
    }

    int q;
    scanf("%d\n", &q);

    ms.resize(q);
    REP(i, q) {
        scanf("%d", &ms[i]);
    }
}

bool recurse(const vector<int>& a, int m, int sum, int i, bool use)
{
    if(i == a.size()) return false;

    if(use)
        sum += a[i];

    if(sum == m)
        return true;
    else if(sum > m)
        return false;

    return recurse(a, m, sum, i+1, false) ||
           recurse(a, m, sum, i+1, true);
}

bool attempt(const vector<int>& a, int m)
{
    return recurse(a, m, 0, 0, false) || recurse(a, m, 0, 0, true);
}

int main()
{
    vector<int> a;
    vector<int> ms;
    read_problem(a, ms);

    int q = ms.size();
    deque<bool> result(q);
    REP(i, q) {
        result[i] = attempt(a, ms[i]);
    }

    for(bool b : result) {
        puts(b ? "yes" : "no");
    }

    return 0;
}