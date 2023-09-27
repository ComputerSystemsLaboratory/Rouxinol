#include <cstdio>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <climits>
#include <cfloat>
using namespace std;

int solve(int y, int m, int d)
{
    int ret = (y - 1) * 195;
    ret += (y - 1) / 3 * 5;

    ret += (m - 1) * 20;
    if(y % 3 != 0)
        ret -= (m - 1) / 2;

    ret += d;

    return ret;
}

int main()
{
    int n;
    cin >> n;

    while(--n >= 0){
        int y, m, d;
        cin >> y >> m >> d;

        cout << (solve(1000, 1, 1) - solve(y, m, d)) << endl;
    }

    return 0;
}