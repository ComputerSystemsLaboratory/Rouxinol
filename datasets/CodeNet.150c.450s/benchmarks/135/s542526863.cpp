#include  <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, m;
    while (cin >> n >> m, n || m) {
        vector<int> x(n);
        vector<int> y(m);

        for (auto &i : x) {
            cin >> i;
        }

        for (auto &i : y) {
            cin >> i;
        }

        vector<int> dis_x;
        for (int i = 0; i < n; i++) {
            int dis = 0;
            for (int j = i; j < n; j++) {
                dis += x[j];
                dis_x.push_back(dis);
            }
        }

        vector<int> dis_y;
        for (int i = 0; i < m; i++) {
            int dis = 0;
            for (int j = i; j < m; j++) {
                dis += y[j];
                dis_y.push_back(dis);
            }
        }

        sort(dis_x.begin(), dis_x.end());
        sort(dis_y.begin(), dis_y.end());

        int res = 0;
        for (int i = 0; i < dis_x.size(); i++) {
            int count_x = 1;
            while (dis_x[i + count_x] == dis_x[i]) count_x++;

            auto up =  upper_bound(dis_y.begin(), dis_y.end(), dis_x[i]);
            auto lo =  lower_bound(dis_y.begin(), dis_y.end(), dis_x[i]);
            if (up != dis_y.end() || lo != dis_y.end())
                res += count_x * (up - lo);

            i += count_x - 1;
        }

        cout << res << endl;
    }


    return 0;
}