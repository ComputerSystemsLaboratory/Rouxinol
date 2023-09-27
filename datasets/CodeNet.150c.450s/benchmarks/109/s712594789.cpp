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
        int n;
        cin >> n;
        if(n == 0)
            return 0;

        vector<vector<int> > t(n, vector<int>(2));
        for(int i=0; i<n; ++i){
            for(int j=0; j<2; ++j){
                int h, m, s;
                char c;
                cin >> h >> c >> m >> c >> s;
                t[i][j] = (h * 60 + m) * 60 + s;
            }
        }
        sort(t.begin(), t.end());

        int ret = 0;
        vector<bool> check(n, false);
        for(int i=0; i<n; ++i){
            if(!check[i])
                ++ ret;
            for(int j=i+1; j<n; ++j){
                if(t[j][0] >= t[i][1] && !check[j]){
                    check[j] = true;
                    break;
                }
            }
        }
        cout << ret << endl;
    }
}