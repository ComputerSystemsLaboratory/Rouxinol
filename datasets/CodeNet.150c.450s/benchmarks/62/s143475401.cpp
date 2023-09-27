#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    vector<int> a(3);
    for (int i = 0; i < 3; ++i) {
        int t; cin >> t; a[i] = t;
    }
    sort(a.begin(), a.end());
    for (auto it = a.begin(); it != a.end(); it++) {
        if (it != a.begin()) cout << ' ';
        cout << *it;
    }
    cout << endl;
}