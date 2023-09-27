#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

string rev(string s) {
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    int m;
    cin >> m;
    while (m--) {
        string s;
        cin >> s;
        vector<string> v;
        v.push_back(s);
        v.push_back(rev(s));
        string s1, s2, s3, s4;
        for (int i=1; i<(int)s.size(); ++i) {
            s1 = s.substr(0,i);
            s2 = s.substr(i);
            s3 = rev(s1);
            s4 = rev(s2);
            v.push_back(s3 + s2);
            v.push_back(s1 + s4);
            v.push_back(s3 + s4);
            v.push_back(s2 + s1);
            v.push_back(s4 + s1);
            v.push_back(s2 + s3);
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        cout << v.size() << endl;
    }
    return 0;
}