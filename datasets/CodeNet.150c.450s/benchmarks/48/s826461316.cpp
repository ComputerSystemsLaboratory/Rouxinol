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
        int e;
        cin >> e;
        if(e == 0)
            return 0;

        int ret = INT_MAX;
        for(int z=0; z*z*z<=e; ++z){
            for(int y=0; y*y<=e-z*z*z; ++y){
                int x = e - z*z*z - y*y;
                ret = min(ret, x + y + z);
            }
        }
        cout << ret << endl;
    }
}