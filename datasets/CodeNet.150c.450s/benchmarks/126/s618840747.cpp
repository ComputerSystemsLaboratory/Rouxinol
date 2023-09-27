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
        int a, b, n;
        cin >> a >> b >> n;
        if(a == 0)
            return 0;
        
        vector<vector<bool> > ng(a+1, vector<bool>(b+1, false));
        for(int i=0; i<n; ++i){
            int c, d;
            cin >> c >> d;
            ng[c][d] = true;
        }

        vector<vector<int> > num(a+1, vector<int>(b+1, 0));
        num[0][1] = 1;
        for(int i=1; i<=a; ++i){
            for(int j=1; j<=b; ++j){
                if(ng[i][j])
                    continue;
                num[i][j] = num[i-1][j] + num[i][j-1];
            }
        }
        cout << num[a][b] << endl;
    }
}