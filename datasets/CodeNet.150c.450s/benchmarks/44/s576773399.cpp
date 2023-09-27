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
        vector<int> a(4), b(4);
        for(int i=0; i<4; ++i)
            if(!(cin >> a[i]))
                return 0;
        for(int i=0; i<4; ++i)
            cin >> b[i];

        int ret = 0;
        for(int i=0; i<4; ++i)
            if(a[i] == b[i])
                ++ ret;
        cout << ret << ' ';

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        ret = -ret;
        int i=0, j=0;
        while(i < 4 && j < 4){
            if(a[i] < b[j])
                ++ i;
            else if(a[i] > b[j])
                ++ j;
            else{
                ++ ret;
                ++ i;
                ++ j;
            }
        }
        cout << ret << endl;
    }
}