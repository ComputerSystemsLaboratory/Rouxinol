#include<iostream>
using namespace std;

int main() {
    string s;
    int m, h;
    
    while (true) {
        cin >> s;
        if (s == "-") break;
        cin >> m;

        for (int i = 0; i < m; i++) {
            cin >> h;
            string sub = s.substr(0, h);
            s.erase(0, h);
            s += sub;
        }
        cout << s << endl;
    }
}