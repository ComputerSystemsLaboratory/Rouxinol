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
    int n;
    cin >> n;
    while(n-- > 0){
        vector<double> x(4), y(4);
        for(int i=0; i<4; ++i)
            cin >> x[i] >> y[i];
        if(fabs((y[1]-y[0]) * (x[3]-x[2]) - (y[3]-y[2]) * (x[1]-x[0])) < 1.0e-10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}