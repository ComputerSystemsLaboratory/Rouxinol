#define _USE_MATH_DEFINES
#include <cstdio>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <complex>
#include <string>
#include <vector>
#include <array>
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
#include <iterator>
#include <memory>
#include <regex>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int a=1; a<=n; ++a){
        int ans = 0;
        for(int x=1; x*x<=a; ++x){
            for(int y=1; y*y<=a; ++y){
                int b = x + y;
                int c = x * x + y * y + x * y - a;
                int z = (int)((-b + sqrt(b * b - 4.0 * c)) / 2.0 + 0.5);
                if(z >= 1 && x * x + y * y + z * z + x * y + y * z + z * x == a)
                    ++ ans;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
