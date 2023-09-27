#include <iostream>
#include <vector>
#include <unordered_set>
#include <cstdint>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for(int i=0;i<n;i++) cin >> a[i];
    unordered_set<int> s;
    s.insert(0);
    vector<int> will_inserted;
    will_inserted.reserve(n);
    for(auto x = a.cbegin(); x != a.cend(); ++x) {
        for(auto y = s.cbegin(); y != s.cend(); ++y) {
            will_inserted.push_back(*x + *y);
        }
        for(auto it = will_inserted.cbegin(); it != will_inserted.cend(); ++it) {
            s.insert(*it);
        }
        will_inserted.clear();
    }
    int q;
    cin >> q;
    for(int i=0;i<q;i++) {
        int t;
        cin >> t;
        cout << (s.count(t) ? "yes" : "no") << endl;
    }
}