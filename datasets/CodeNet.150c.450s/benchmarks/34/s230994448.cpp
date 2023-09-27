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

        vector<int> num(n+3, 0);
        num[0] = 1;
        for(int i=0; i<n; ++i){
            num[i+1] += num[i];
            num[i+2] += num[i];
            num[i+3] += num[i];
        }

        int ret = num[n];
        cout << ((num[n]+3649) / 3650) << endl;
    }
}