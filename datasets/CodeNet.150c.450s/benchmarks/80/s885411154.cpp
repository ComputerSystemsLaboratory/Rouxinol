#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a,b,c,d,e,f,g,h;
    cin >> a >> b >> c >> d;
    cin >> e >> f >> g >> h;
    cout << max((a+b+c+d),(e+f+g+h)) << endl;

    return 0;
}
