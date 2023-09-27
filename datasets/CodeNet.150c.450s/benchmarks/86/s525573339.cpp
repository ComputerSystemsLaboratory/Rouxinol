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
        int n, m, p;
        cin >> n >> m >> p;
        if(n == 0)
            return 0;

        vector<int> x(n);
        for(int i=0; i<n; ++i)
            cin >> x[i];

        if(x[m-1] == 0){
            cout << 0 << endl;
        }else{
            int ret = accumulate(x.begin(), x.end(), 0);
            ret *= 100 - p;
            ret /= x[m-1];
            cout << ret << endl;
        }
    }
}