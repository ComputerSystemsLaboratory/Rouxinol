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

        vector<vector<bool> > jewel(21, vector<bool>(21, false));
        for(int i=0; i<n; ++i){
            int x, y;
            cin >> x >> y;
            jewel[y][x] = true;
        }

        int m;
        cin >> m;
        int get = 0;
        int y = 10;
        int x = 10;
        for(int i=0; i<m; ++i){
            char c;
            int dist;
            cin >> c >> dist;

            int dy = 0;
            int dx = 0;
            if(c == 'N')
                dy = 1;
            else if(c == 'S')
                dy = -1;
            else if(c == 'E')
                dx = 1;
            else
                dx = -1;

            while(--dist >= 0){
                y += dy;
                x += dx;
                if(jewel[y][x]){
                    jewel[y][x] = false;
                    ++ get;
                }
            }
        }

        if(get == n)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}