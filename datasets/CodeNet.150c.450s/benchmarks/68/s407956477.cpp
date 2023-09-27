#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            v.push_back(a);
        }

        int r = 10000000;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == j) {
                    continue;
                }
                r = min(abs(v[i] - v[j]), r);
            }
        }
        cout << r << endl;
    }
}