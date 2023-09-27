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

int main()
{
    const int TMP = 1000;
    for(;;){
        int a,b,c,d,e,f;
        if(!(cin >> a >> b >> c >> d >> e >> f))
            return 0;
        int x = 10 * TMP * (c*e - b*f) / (a*e - b*d);
        int y = 10 * TMP * (c*d - a*f) / (b*d - a*e);
        int xSign = (x>=0? 1:-1);
        int ySign = (y>=0? 1:-1);
        x = abs(x);
        y = abs(y);

        if(x % 10 >= 5)
            x += 10;
        x /= 10;
        if(xSign == -1 && x > 0)
            cout << '-';
        printf("%d.%03d ", x/TMP, x%TMP);

        if(y % 10 >= 5)
            y += 10;
        y /= 10;
        if(ySign == -1 && y > 0)
            cout << '-';
        printf("%d.%03d\n", y/TMP, y%TMP);
    }
}