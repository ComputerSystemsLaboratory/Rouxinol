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

int main()
{
    for(;;){
        int a, L;
        cin >> a >> L;
        if(L == 0)
            return 0;

        map<int, int> memo;
        memo[a] = 0;

        for(int i=1; ; ++i){
            ostringstream oss;
            oss << a;
            string s = oss.str();
            s = string(L-s.size(), '0') + s;

            sort(s.rbegin(), s.rend());
            int b = atoi(s.c_str());
            reverse(s.begin(), s.end());
            b -= atoi(s.c_str());

            a = b;
            if(memo.find(a) != memo.end()){
                cout << memo[a] << ' ' << a << ' ' << (i - memo[a]) << endl;
                break;
            }
            memo[a] = i;
        }
    }
}