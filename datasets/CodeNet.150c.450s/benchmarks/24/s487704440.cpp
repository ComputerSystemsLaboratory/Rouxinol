#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    int n, m;
    while (cin >> n >> m, (n || m)) {
        vector<pair<int,int> > v(n);
        for (auto &i : v) cin >> i.second >> i.first;
        sort(v.begin(), v.end());

        int i = n-1;
        while (m && i >= 0) {
            if (v[i].second) m--, v[i].second--;
            else i--;
        }

        int res = 0;
        i = 0;
        while (i < v.size() && v[i].second) {
            res += v[i].second * v[i].first;
            i++;
        }

        cout << res << endl;
    }

    return 0;
}