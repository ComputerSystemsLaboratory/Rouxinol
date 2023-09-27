#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; ++i) {
        cin >> v[i];
    }
    reverse(v.begin(), v.end());
    for (int i=0; i<n; ++i) {
        cout << (i == 0 ? "" : " ") << v[i];
    }
    cout << endl;
    return 0;
}