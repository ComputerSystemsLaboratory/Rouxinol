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
        int d;
        if(!(cin >> d))
            return 0;

        int ret = 0;
        for(int i=d; i<600; i+=d)
            ret += d * i * i;
        cout << ret << endl;
    }
}