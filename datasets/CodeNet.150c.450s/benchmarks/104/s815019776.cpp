#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w, n, a, b;
    char c;
    cin >> w >> n;
    vector<int> v(w);
    for (int i = 0; i < w; i++) {
        v[i] = i+1;
    }
    for (int i = 0; i < n; i++) {
        cin >> a >> c >> b;
        a--; b--;
        swap(v[a], v[b]);
    }
    for (int &x: v) {
        cout << x << endl;
    }
    return 0;
}