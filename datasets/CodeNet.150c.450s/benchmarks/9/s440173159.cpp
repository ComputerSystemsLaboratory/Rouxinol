#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> vstr;
    string str;
    vector<int> vint;
    vector<vector<int> > vvint;
    int i, j, m, h, n = 0;

    while(1) {
        cin >> str;
        if(str == "-") break;
        ++n;
        vstr.push_back(str);
        cin >> m;
        for(i=0; i<m; ++i) {
            cin >> h;
            vint.push_back(h);
        }
        vvint.push_back(vint);
        vint.clear();
    }

    for(i=0; i<n; ++i) {
        for(j=0; j<vvint[i].size(); ++j) {
            str = vstr[i].substr(0, vvint[i][j]);
            vstr[i].erase(0, vvint[i][j]);
            vstr[i].append(str);
        }
        cout << vstr[i] << endl;
    }

    return 0;
}