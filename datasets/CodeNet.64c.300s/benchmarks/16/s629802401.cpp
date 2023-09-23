#include <iostream>
#include <climits>

using namespace std;

int main(int argc, char const* argv[])
{
    int maxprof = INT_MIN, min, x, n;

    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    cin >> min;

    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        int p = x - min;
        if(p > maxprof) maxprof = p;
        if(x < min) min = x;
    }

    cout << maxprof << endl;

    return 0;
}