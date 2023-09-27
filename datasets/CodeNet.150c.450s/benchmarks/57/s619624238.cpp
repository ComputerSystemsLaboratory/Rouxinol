// @author: arch_

#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string& str, char sep) {
    vector<string> v;
    stringstream s(str);
    string buf;
    while (getline(s, buf, sep)) v.emplace_back(buf);
    return v;
}

int main(void) {
    vector<vector<string>> d;
    string s; 
    while (getline(cin, s)) {
        auto&& i = split(s, ' ');
        if (i[1] == "?") break;
        d.emplace_back(i);
    }
    int a, b;
    for (auto&& v : d) {
        a = stoi(v[0]); b = stoi(v[2]);
        cout << (v[1] == "+" ? a + b :
                 v[1] == "-" ? a - b :
                 v[1] == "*" ? a * b :
                 static_cast<int>(a / b)) << "\n";
    }
    return 0;
}