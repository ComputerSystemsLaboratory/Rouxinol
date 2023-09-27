#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    int n, m;
    char c[256], a;
    string s;
    while(1) {
        cin >> n;
        if(n == 0) break;
        s = "";
        for(int i=0; i<128; i++) c[i] = i;
        for(int i=0; i<n; i++) {
            cin >> a;
            cin >> c[a];
        }
        cin >> m;
        for(int i=0; i<m; i++) {
            cin >> a;
            s += c[a];
        }
        cout << s << endl;
    }
    return 0;
}