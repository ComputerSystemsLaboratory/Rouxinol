#include <bits/stdc++.h>

using namespace std;

map<string, int> a;

int main()
{
    string t;
    string longest = "";
    string highest;
    int ma = 0;
    while (cin >> t) {
        if (ma < ++a[t]) ma = a[t], highest = t;
        if (longest.size() < t.size()) longest = t;
    }
    cout<<highest<<" "<<longest<<endl;
}