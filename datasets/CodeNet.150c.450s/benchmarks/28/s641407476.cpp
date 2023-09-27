#include <vector>
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



void read_problem(vector<int>& ws, int& k)
{
    int n;
    scanf("%d %d\n", &n, &k);

    ws.resize(n);
    REP(i, n) {
        scanf("%d\n", &ws[i]);
    }
}

bool attempt(const vector<int>& ws, int k, int p)
{
    int weight = 0;
    for(int w : ws) {
        if(w > p) return false;

        if(weight + w > p) {
            --k;
            if(k == 0) return false;
            weight = w;
        }
        else {
            weight += w;
        }
    }

    return true;
}

int solve(const vector<int>& ws, int k)
{
    int n = ws.size();
    int lower = 1;
    int upper = 10000 * n / k + 1;
    int p = (lower + upper) / 2;

    for(;;) {
        if(attempt(ws, k, p)) {
            upper = p;
            p = (p + lower) / 2;
        }
        else {
            lower = p;
            p = (p + upper) / 2;
        }

        if(upper - lower == 1) {
            if(upper == 2 && attempt(ws, k, 1)) {
                upper = 1;
            }
            return upper;
        }
    }
}

int main()
{
    vector<int> ws;
    int k;
    read_problem(ws, k);
#if 0
    printf("k: %d\n", k);
    REP(i, ws.size()) {
        printf("%d ", ws[i]);
    }
#endif

    int result = solve(ws, k);
    printf("%d\n", result);

    return 0;
}