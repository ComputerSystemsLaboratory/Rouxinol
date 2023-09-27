#include <bits/stdc++.h>

using namespace std;

#define Vi vector<int>
#define FOR(i,s,e) for (int i=s; i<e; i++)
#define ITER(v) v.begin(), v.end()

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string str;

    cin >> str;
    reverse(ITER(str));
    cout << str << endl;

    return 0;
}