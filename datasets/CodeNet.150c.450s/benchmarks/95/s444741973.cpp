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

int main()
{
    for(;;){
        int n;
        cin >> n;
        if(n == 0)
            return 0;

        bool isLeftUp = false;
        bool isRightUp = false;
        bool isFloor = true;
        int ans = 0;
        while(--n >= 0){
            string s;
            cin >> s;
            if(s[0] == 'l')
                isLeftUp ^= true;
            else
                isRightUp ^= true;

            if(isFloor && isLeftUp && isRightUp){
                ++ ans;
                isFloor = false;
            }
            else if(!isFloor && !isLeftUp && !isRightUp){
                ++ ans;
                isFloor = true;
            }
        }

        cout << ans << endl;
    }
}