#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <limits>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cassert>

using namespace std;

#define FOR(i, start, end) for(int i = (start); i < (end); ++i)
#define REP(i, n) FOR(i, 0, n)

struct LeqCount {
    int cnt;
    LeqCount() : cnt(0) {}
    bool operator()(int lhs, int rhs)
    {
        ++cnt;
        return lhs <= rhs;
    }
};

void read_problem(vector<int>& ary)
{
    int n;
    scanf("%d\n", &n);

    ary.resize(n);
    REP(i, n) {
        scanf("%d", &ary[i]);
    }
}

void merge(vector<int>& ary, int start, int mid, int end, LeqCount& leq)
{
    constexpr int INF = numeric_limits<int>::max();

    vector<int> ary_l(ary.begin() + start, ary.begin() + mid);
    vector<int> ary_r(ary.begin() + mid,   ary.begin() + end);
    ary_l.push_back(INF);
    ary_r.push_back(INF);

    int i = 0;
    int j = 0;
    FOR(k, start, end) {
        if(leq(ary_l[i], ary_r[j])) {
            ary[k] = ary_l[i++];
        }
        else {
            ary[k] = ary_r[j++];
        }
    }
}

void mergesort(vector<int>& ary, int start, int end, LeqCount& leq)
{
    if(end - start >= 2) {
        int mid = (start + end) / 2;
        mergesort(ary, start, mid, leq);
        mergesort(ary, mid, end, leq);
        merge(ary, start, mid, end, leq);
    }
}

int main()
{
    vector<int> ary;
    read_problem(ary);
    int n = ary.size();

    LeqCount leq;
    mergesort(ary, 0, ary.size(), leq);

    REP(i, n) {
        printf("%d%c", ary[i], i == n-1 ? '\n' : ' ');
    }
    printf("%d\n", leq.cnt);

    return 0;
}