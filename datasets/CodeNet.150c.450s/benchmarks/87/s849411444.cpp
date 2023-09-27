#include <cstdio>
#include <iostream>
#include <sstream>
#include <fstream>
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
#include <limits>
#include <climits>
#include <cfloat>
#include <functional>
using namespace std;

int solve(vector<vector<int> >& a)
{
    int h = a.size();
    int w = a[0].size();

    int ret = 0;
    for(int y=0; y<h; ++y){
        int cnt = 0;
        for(int x=0; x<w; ++x){
            ++ cnt;
            if(x == w-1 || a[y][x] != a[y][x+1]){
                if(a[y][x] != -1 && cnt >= 3){
                    ret += a[y][x] * cnt;
                    for(int i=0; i<cnt; ++i)
                        a[y][x-i] = -1;
                }
                cnt = 0;
            }
        }
    }

    for(int x=0; x<w; ++x){
        int y2 = h-1;
        for(int y=h-1; y>=0; --y){
            if(a[y][x] != -1){
                if(y < y2){
                    a[y2][x] = a[y][x];
                    a[y][x] = -1;
                }
                -- y2;
            }
        }
    }

    return ret;
}

int main()
{
    for(;;){
        int h;
        cin >> h;
        if(h == 0)
            return 0;

        vector<vector<int> > a(h, vector<int>(5));
        for(int y=0; y<h; ++y){
            for(int x=0; x<5; ++x){
                cin >> a[y][x];
            }
        }

        int ret = 0;
        for(;;){
            int p = solve(a);
            if(p == 0)
                break;
            ret += p;
        }
        cout << ret << endl;
    }
}