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
    map<string, int> m;
    int maxNum = 0;
    string ret1;
    int maxLength = 0;
    string ret2;

    for(;;){
        string s;
        if(!(cin >> s))
            break;

        int num = ++ m[s];
        if(num > maxNum){
            maxNum = num;
            ret1 = s;
        }

        if(s.size() > maxLength){
            maxLength = s.size();
            ret2 = s;
        }
    }

    cout << ret1 << ' ' << ret2 << endl;
    return 0;
}