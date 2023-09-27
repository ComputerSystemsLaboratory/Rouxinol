#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <queue>
#include <vector>
#include <cmath>
#include <stack>
#include <map>
#include <set>
#define pi acos(-1)
#define LL long long
#define INF 0x3f3f3f3f
using namespace std;
typedef pair<int, int> P;
const int maxn = 1e5 + 5;

LL GCD(LL a, LL b)
{
    if (b == 0) return a;
    return GCD(b, a%b);
}
int main(void)
{
//	freopen("C:\\Users\\wave\\Desktop\\NULL.exe\\NULL\\in.txt","r", stdin);
    LL a, b;
    while (cin >> a >> b)
    {
        LL gcd = GCD(a, b);
        a /= gcd;
        b /= gcd;
        LL lcm = a * b * gcd;
        cout << gcd << " " << lcm << endl;
    }

    return 0;
}