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
    stack<int> stk;
    for(;;){
        int n;
        if(!(cin >> n))
            return 0;

        if(n == 0){
            cout << stk.top() << endl;
            stk.pop();
        }else{
            stk.push(n);
        }
    }
}