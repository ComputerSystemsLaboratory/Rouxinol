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
        int r, c;
        cin >> r >> c;
        if(r == 0)
            return 0;

        vector<bitset<10> > osenbei(c);
        for(int i=0; i<r; ++i){
            for(int j=0; j<c; ++j){
                int a;
                cin >> a;
                osenbei[j][i] = (a == 1);
            }
        }

        int ret = 0;
        for(int i=0; i<(1<<r); ++i){
            bitset<10> bs(i);
            int num = 0;
            for(int j=0; j<c; ++j){
                int tmp = (osenbei[j] ^ bs).count();
                tmp = max(tmp, r-tmp);
                num += tmp;
            }
            ret = max(ret, num);
        }

        cout << ret << endl;
    }
}