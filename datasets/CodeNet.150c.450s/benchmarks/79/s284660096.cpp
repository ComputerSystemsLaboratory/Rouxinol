#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    while (true) {
        int n;
        int r;
        cin >> n >> r;

        if (n == 0 && r == 0) {
            break;
        }

        vector<int> v(static_cast<size_t>(n));
        iota(begin(v), end(v), 1);
        reverse(begin(v), end(v));
        for (int i = 0; i < r; ++i) {
            int p;
            int c;
            cin >> p >> c;
            vector<int> t;
            copy_n(begin(v) + (p - 1), c, back_inserter(t));
            copy_n(begin(v), (p - 1), back_inserter(t));
            copy(begin(v) + (p - 1) + c, end(v), back_inserter(t));
            v = t;
        }
        cout << v[0] << endl;
    }
}