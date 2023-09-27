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
#include <climits>
#include <cfloat>
#include <functional>
using namespace std;

class Data
{
public:
    int h, w;
    Data(int h, int w){
        this->h = h;
        this->w = w;
    }
    bool operator<(const Data& d) const{
        return make_pair(h*h+w*w, h) < make_pair(d.h*d.h+d.w*d.w, d.h);
    }
};

int main()
{
    vector<Data> d;
    for(int h=1; h<=150; ++h){
        for(int w=h+1; w<=150; ++w){
            d.push_back(Data(h, w));
        }
    }
    sort(d.begin(), d.end());

    for(;;){
        int h, w;
        cin >> h >> w;
        if(h == 0)
            return 0;

        int i = 0;
        while(d[i].h != h || d[i].w != w)
            ++ i;
        ++ i;
        cout << d[i].h << ' ' << d[i].w << endl;
    }
}