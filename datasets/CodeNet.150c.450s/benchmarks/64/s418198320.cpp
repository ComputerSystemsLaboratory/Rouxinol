#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> res;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        for (int j = 0, size = res.size(); j < size; ++j) {
            res.push_back(a + res[j]);
        }
        res.push_back(a);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int t;
        cin >> t;
        vector<int>::iterator it = find(res.begin(), res.end(), t);
        cout << (it != res.end() ? "yes" : "no") << "\n";
    }

    return 0;
}