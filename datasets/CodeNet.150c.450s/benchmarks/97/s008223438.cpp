//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    int n;
    while(cin>>n, n) {
        vector<pair<int, int> > v;
        v.push_back(make_pair(201,201));
        for(int i=0; i<n-1; ++i) {
            int a, b;
            cin >> a >> b;
            int x = v[a].first;
            int y = v[a].second;
            if(b==0) --x;
            else if(b==1) ++y;
            else if(b==2) ++x;
            else if(b==3) --y;
            v.push_back(make_pair(x,y));
        }

        int max_x = -1, max_y = -1;
        int min_x = 1000000, min_y = 1000000;
        for (auto e : v) {
            int x = e.first;
            int y = e.second;
            max_x = max(max_x, x);
            max_y = max(max_y, y);
            min_x = min(min_x, x);
            min_y = min(min_y, y);
        }
        cout << max_x - min_x + 1 << " " << max_y - min_y + 1 << endl;
    }
    return 0;
}