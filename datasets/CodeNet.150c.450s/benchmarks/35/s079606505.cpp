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
        int n;
        cin >> n;
        if(n == 0)
            return 0;

        int ret = INT_MIN/2;
        int tmp = INT_MIN/2;
        for(int i=0; i<n; ++i){
            int a;
            cin >> a;
            tmp = max(tmp + a, a);
            ret = max(ret, tmp);
        }
        cout << ret << endl;
    }
}