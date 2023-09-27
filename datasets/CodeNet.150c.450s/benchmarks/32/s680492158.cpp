#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    while (true) {
        int m;
        int nMin;
        int nMax;
        cin >> m >> nMin >> nMax;

        if (m == 0 && nMax == 0 && nMin == 0) {
            break;
        }

        vector<int> v;
        for (int i = 0; i < m; ++i) {
            int p;
            cin >> p;
            v.push_back(p);
        }

        auto maximum = make_pair(0, -1);
        for (int n = nMin; n <= nMax; ++n) {
            auto gap = v[n - 1] - v[n];
            if (maximum.second <= gap) {
                maximum = make_pair(n, gap);
            }
        }
        cout << maximum.first << endl;
    }
}