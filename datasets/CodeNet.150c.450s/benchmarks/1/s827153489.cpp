// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_D
// O(n*log(n)) PCC p. 65 solution
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(int argc, char **argv)
{
        int n;
        cin >> n;
        vector<int> dp(n, INT_MAX);
        for (int i = 0; i < n; i++) {
                int a;
                cin >> a;
                auto p = lower_bound(dp.begin(), dp.end(), a);
                (*p) = a;
        }
        auto p = lower_bound(dp.begin(), dp.end(), INT_MAX);
        cout << distance(dp.begin(), p) << endl;
        return 0;
}