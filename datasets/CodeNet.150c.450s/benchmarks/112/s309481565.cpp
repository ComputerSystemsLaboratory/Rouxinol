#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m;
    string op;
    while(cin >> n && n) {
        char c1[100], c2[100];
        op = "";
        for(int i=0; i < n; ++i) cin >> c1[i] >> c2[i];
        cin >> m;
        for(int i=0; i < m; ++i) {
            char c;
            cin >> c;
            for(int j=0; j < n; ++j) {
                if (c == c1[j]) {
                    c = c2[j];
                    break;
                }
            }
            op += c;
        }
        cout << op << endl;
    }

    return 0;
}