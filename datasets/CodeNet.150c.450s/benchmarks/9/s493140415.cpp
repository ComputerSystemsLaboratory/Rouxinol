#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    while(1) {
        string s;
        int m;
        cin >> s;
        if(s == "-") break;
        cin >> m;
        int h[110];
        for(int i = 0; i < m; i++) {
            cin >> h[i];
        }

        for(int i = 0; i < m; i++) {
            s += s.substr(0, h[i]);
            s.replace(0, h[i], "");
        }
        cout << s << endl;

    }
    return 0;
}
