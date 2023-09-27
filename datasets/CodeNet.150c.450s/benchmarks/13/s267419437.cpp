#include <cstdio>
#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
    string s, p, ans;
    
    cin >> s >> p;
    s += s;
    s.find(p) != -1 ? ans = "Yes" : ans = "No";
    cout << ans << endl;
    return 0;
}
