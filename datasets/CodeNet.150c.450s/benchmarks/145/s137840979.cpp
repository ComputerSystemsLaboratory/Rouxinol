#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s, t;
    getline(cin, s);
    map<string, int> m;
    istringstream is(s);
    while (is >> t) if (m.find(t) == m.end()) m[t] = 0; else m[t]++;

    vector<pair<int, string> > v1, v2;
    for (map<string, int>::iterator it = m.begin(); it != m.end(); ++it) {
        v1.push_back(make_pair(it->second, it->first));
        v2.push_back(make_pair(it->first.size(), it->first));
    }
    sort(v1.rbegin(), v1.rend());
    sort(v2.rbegin(), v2.rend());
    cout << v1[0].second << " " << v2[0].second << endl;

    return 0;
}