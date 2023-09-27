#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <functional>
#include <iterator>
#include <limits>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstdint>
#include <cassert>

using namespace std;

#define FOR(i, start, end) for(int i = (start); i < (end); ++i)
#define REP(i, n) FOR(i, 0, n)



void read_problem(vector<int>& ary)
{
    int n;
    scanf("%d\n", &n);

    ary.resize(n);
    REP(i, n) {
        scanf("%d", &ary[i]);
    }
}

int part(vector<int>& ary, int p, int r)
{
    int pivot = ary[r];

    int i = p; // pivot ??\??????????´?????????\??????
    FOR(j, p, r) {
        if(ary[j] <= pivot) {
            swap(ary[i], ary[j]);
            ++i;
        }
    }
    swap(ary[i], ary[r]);

    return i;
}

int main()
{
    vector<int> ary;
    read_problem(ary);
    int n = ary.size();

    int q = part(ary, 0, n-1);
    REP(i, n) {
        if(i == q) putchar('[');
        printf("%d", ary[i]);
        if(i == q) putchar(']');
        putchar(i == n-1 ? '\n' : ' ');
    }

    return 0;
}