#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstdlib>

using namespace std;

#define FOR(i, start, end) for(int i = (start); i < (end); ++i)
#define REP(i, n) FOR(i, 0, n)

int gcd(int a, int b)
{
    if(a < b) swap(a, b);

    if(b == 0) return a;

    int r = a % b;
    return gcd(b, r);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", gcd(a, b));

    return 0;
}