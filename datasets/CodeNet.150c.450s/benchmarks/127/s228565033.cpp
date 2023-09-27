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
    ios::sync_with_stdio(false);
    int m;
    cin >> m;
    while (m--) {
        string s;
        cin >> s;
        vector<string> v;
        v.push_back(s);
        v.push_back(rev(s));
        for (int i=1; i<(int)s.size(); ++i) {
            string s1, s2, s3, s4;
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
        int res = 1;
        for (int i=1; i<(int)v.size(); ++i) {
            res += v[i-1] != v[i];
        }
        cout << res << endl;
    }
    return 0;
}