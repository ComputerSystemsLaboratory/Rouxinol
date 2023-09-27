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
    bitset<31> bs;
    for(int i=0; i<28; ++i){
        int a;
        cin >> a;
        bs[a] = true;
    }
    for(int i=1; i<=30; ++i){
        if(!bs[i])
            cout << i << endl;
    }
    return 0;
}