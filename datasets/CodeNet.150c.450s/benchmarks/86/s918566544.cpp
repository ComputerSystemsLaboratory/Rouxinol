#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    while (true) {
        int n, m, p;
        cin >> n >> m >> p;
        if (n == 0 && m == 0 && p == 0) {
            return 0;
        }

        vector<int> v;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            v.push_back(x);
        }

        auto bet = accumulate(begin(v), end(v), 0) * 100;
        auto remain = bet * (100 - p);
        cout << (v[m - 1] == 0 ? 0 : remain / v[m - 1] / 100) << endl;
    }
}