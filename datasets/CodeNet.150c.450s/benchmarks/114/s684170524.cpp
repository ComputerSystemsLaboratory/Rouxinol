#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int i, j, n, res = 0;
    cin >> n;
    int a[n][n];

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }

    vector<int> v;
    set<int> cons;
    v.push_back(0);
    cons.insert(0);
    while (v.size() != n) {
        int nearest_node = 9999999;
        int nearest_distance = 9999999;
        for (i=0; i<v.size(); i++) {
            for (j=0; j<n; j++) {
                if ((a[v[i]][j] != -1) && (a[v[i]][j] < nearest_distance) && (cons.count(j) == 0)) {
                    nearest_node = j;
                    nearest_distance = a[v[i]][j];
                }
            }
        }
        res += nearest_distance;
        v.push_back(nearest_node);
        cons.insert(nearest_node);
    }
    cout << res << endl;
    return 0;
}