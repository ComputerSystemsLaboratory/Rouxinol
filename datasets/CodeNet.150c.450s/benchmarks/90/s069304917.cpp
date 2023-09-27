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
    vector<int> num(101, 0);
    int maxNum = 0;

    for(;;){
        int a;
        if(!(cin >> a))
            break;
        maxNum = max(maxNum, ++num[a]);
    }

    for(int i=1; i<=100; ++i){
        if(num[i] == maxNum)
            cout << i << endl;
    }
}