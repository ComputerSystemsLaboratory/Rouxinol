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

int solve(int a, int n)
{
    if(a == 0){
        if(n == 0)
            return 1;
        return 0;
    }

    int ret = 0;
    for(int i=0; i<=9; ++i)
        ret += solve(a-1, n-i);
    return ret;
}

int main()
{
    for(;;){
        int n;
        if(!(cin >> n))
            return 0;

        cout << solve(4, n) << endl;
    }
}