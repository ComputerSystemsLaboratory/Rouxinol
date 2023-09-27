#include <vector>
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

void read_problem(int& n, vector<int>& heap)
{
    scanf("%d\n", &n);

    heap.resize(n+1);
    heap[0] = numeric_limits<int>::min();
    FOR(i, 1, n+1) {
        scanf("%d", &heap[i]);
    }
}

int main()
{
    int n;
    vector<int> heap;
    read_problem(n, heap);

    FOR(i, 1, n+1) {
        int idx_parent = i/2;
        int idx_left   = 2*i;
        int idx_right  = 2*i + 1;

        printf("node %d: key = %d, ", i, heap[i]);
        if(idx_parent != 0)
            printf("parent key = %d, ", heap[idx_parent]);
        if(idx_left <= n)
            printf("left key = %d, ", heap[idx_left]);
        if(idx_right <= n)
            printf("right key = %d, ", heap[idx_right]);
        puts("");
    }

    return 0;
}