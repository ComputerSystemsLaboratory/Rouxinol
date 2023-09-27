#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    map<char, vector<int> > m;
    char c; int a;
    while(cin >> c >> a) {
        map<char, vector<int> >::iterator it = m.find(c);
        if (it == m.end()) {
            vector<int> v;
            v.push_back(a);
            m.insert(make_pair(c, v));
        }
        else
            m.at(c).push_back(a);
    }
    sort(m.at('S').begin(), m.at('S').end());
    sort(m.at('H').begin(), m.at('H').end());
    sort(m.at('C').begin(), m.at('C').end());
    sort(m.at('D').begin(), m.at('D').end());
    vector<int>::iterator it = m.at('S').begin();
    for (int i = 1; i <= 13; i++) {
        if (i == *it) ++it;
        else cout << "S " << i << "\n";
    }
    it = m.at('H').begin();
    for (int i = 1; i <= 13; i++) {
        if (i == *it) ++it;
        else cout << "H " << i << "\n";
    }
    it = m.at('C').begin();
    for (int i = 1; i <= 13; i++) {
        if (i == *it) ++it;
        else cout << "C " << i << "\n";
    }
    it = m.at('D').begin();
    for (int i = 1; i <= 13; i++) {
        if (i == *it) ++it;
        else cout << "D " << i << "\n";
    }
}