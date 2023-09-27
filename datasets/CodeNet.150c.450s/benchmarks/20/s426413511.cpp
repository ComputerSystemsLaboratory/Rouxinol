#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, s, m, h;
    cin >> x;
    s = x % 60;
    x = x / 60;
    m = x % 60;
    h = x / 60;
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}
