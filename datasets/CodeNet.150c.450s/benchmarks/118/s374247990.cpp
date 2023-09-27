#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
 
using namespace std;

int count(int y, int m, int d);

int main()
{
    int n, year, month, date;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> year >> month >> date;
        cout << count(year, month, date) << endl;
    }
   return 0;
}

int count(int y, int m, int d)
{
    int ans = 0;
    for(int i = y + 1; i < 1000; i++){
        if(i % 3 == 0) ans += 10 * 20;
        else ans += 5 * 20 + 5 * 19;
    }
    for(int i = m + 1; i <= 10; i++){
        if(y % 3 == 0) ans += 20;
        else {
            if(i % 2 == 1) ans += 20;
            else ans += 19;
            }
    }
    if(m % 2 == 0 && y % 3 != 0) ans += 19;
    else ans += 20;
    ans -= d - 1;
    return ans;
}