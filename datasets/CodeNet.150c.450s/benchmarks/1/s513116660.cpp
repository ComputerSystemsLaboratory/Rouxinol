// longest increasing subsequence (LIS)
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> sequence;
    vector<int> LIS;
    int initial;
    cin >> initial;
    LIS.emplace_back(initial);
    for (int i = 1; i < n; ++i) {
        int a;
        cin >> a;
        auto it = lower_bound(begin(LIS), end(LIS), a);
        if (it == end(LIS)) {
            LIS.emplace_back(a);
        } else {
            *it = a;
        }
    }
    cout << LIS.size() << endl;
}

