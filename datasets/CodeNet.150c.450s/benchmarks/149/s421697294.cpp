#include <iostream>
#include <vector>

using namespace std;
vector<int> parents;

int root(int k)
{
    /*
    if (parents[k] == k) {
        return k;
    } else {
        return parents[k] = root(parents[k]);
    }
    */

    while (parents[k] != k) {
        k = parents[k];
    }
    return k;
}

int main()
{
    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n; i++) {
        parents.push_back(i);
    }

    for (int j = 0; j < q; j++) {
        int c, x, y;
        cin >> c >> x >> y;

        if (c) {
            if (root(x) == root(y))
                cout << 1 << endl;
            else
                cout << 0 << endl;
        } else {
            int rx = root(x);
            int ry = root(y);
            if (rx != ry) {
                parents[rx] = ry;
            }
        }
    }
}