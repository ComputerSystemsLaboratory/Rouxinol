#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int n, m, p;

    while (cin >> n >> m >> p, (n || m || p)) {
        vector<int> x(n);
        int sum = 0;
        for (auto &i : x) cin >> i, sum += i;

        sum *= (100 - p);

        if (x[m-1] == 0) cout << 0 << endl;
        else cout << (int)(sum / x[m-1]) << endl;
    }

    return 0;
}