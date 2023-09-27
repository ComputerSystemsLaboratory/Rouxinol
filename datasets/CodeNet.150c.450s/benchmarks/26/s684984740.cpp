#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b;

    cin >> a >> b;
    cout << "a " << (a == b ? "==" : (a < b ? "<" : ">")) << " b\n";

    return 0;
}