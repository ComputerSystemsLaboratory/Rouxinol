#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    while(cin >> n, n) {
        map<char, char> conv;
        for(int i=0; i<n; ++i) {
            char c1, c2;
            cin >> c1 >> c2;
            conv[c1] = c2;
        }
        int m;
        cin >> m;
        for(int i=0; i<m; ++i) {
            char c;
            cin >> c;
            if(conv.count(c) == 0) cout << c;
            else                   cout << conv[c];
        }
        cout << endl;
    }
}