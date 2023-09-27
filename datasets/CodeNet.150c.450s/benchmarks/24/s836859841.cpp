#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    while (true) {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0) {
            return 0;
        }

        vector<pair<int, int>> v;
        for (int i = 0; i < n; ++i) {
            int d, p;
            cin >> d >> p;
            v.emplace_back(d, p);
        }

        sort(begin(v), end(v),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 return a.second > b.second;
             });
        auto remain = m;
        auto expectedSum = 0;
        for (auto&& i : v) {
            if (i.first <= remain) {
                remain -= i.first;
            }
            else {
                expectedSum += (i.first - remain) * i.second;
                remain = 0;
            }
        }
        cout << expectedSum << endl;
    }
}
