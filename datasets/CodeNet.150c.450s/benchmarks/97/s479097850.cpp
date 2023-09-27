#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};

int main(int argc, char *argv[])
{
    int n, ni, di, w, h;
    while (cin >> n, n) {
        vector<int> x(n, 0);
        vector<int> y(n, 0);
        for (int i = 1; i < n; ++i) {
            cin >> ni >> di;
            x[i] = x[ni] + dx[di];
            y[i] = y[ni] + dy[di];
        }
        w = *max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end());
        h = *max_element(y.begin(), y.end()) - *min_element(y.begin(), y.end());
        cout << ++w << ' ' << ++h << endl;
    }
    return 0;
}