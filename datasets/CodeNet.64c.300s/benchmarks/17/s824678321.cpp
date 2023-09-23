#include <cstdio>
#include <iostream>
#include <sstream>
#include <fstream>
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
#include <limits>
#include <climits>
#include <cfloat>
#include <functional>
using namespace std;

int addTax(int a, int x)
{
    return a * (100 + x) / 100;
}

int main()
{
    for(;;){
        int x, y, s;
        cin >> x >> y >> s;
        if(x == 0)
            return 0;

        int ret = -1;
        for(int a=1; a<s; ++a){
            for(int b=1; b<s; ++b){
                if(addTax(a, x) + addTax(b, x) == s)
                    ret = max(ret, addTax(a, y) + addTax(b, y));
            }
        }
        cout << ret << endl;
    }
}