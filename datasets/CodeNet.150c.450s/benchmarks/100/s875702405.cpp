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

long long factorial(int a) // ツ階ツ湘ヲ
{
    long long ret = 1;
    while(a > 0)
        ret *= a--;
    return ret;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}