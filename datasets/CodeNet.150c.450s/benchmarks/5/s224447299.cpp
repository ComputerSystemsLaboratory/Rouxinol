#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, x;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    vector<int>::reverse_iterator rit = v.rbegin();
    cout << *rit; ++rit;
    for (; rit != v.rend(); ++rit) {
        cout << " " << *rit;
    }
    cout << "\n";
}