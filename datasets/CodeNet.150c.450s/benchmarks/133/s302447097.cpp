#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const int F = 26;
const int def = 1e6;

int n;
vector<int> c(F);
vector<vector<int>> a;



void init() {
    cin >> n;
    a.resize(n, vector<int>(F));
    for(int i = 0; i < F; i++)cin >> c[i];
    for(int i = 0; i < n; i++)for(int j = 0; j < F; j++)cin >> a[i][j];
}

int main()
{
    init();
    vector<int> t(n);
    for(int i = 0; i < n; i++)cin >> t[i],t[i]--;

    int sum = 0;
    vector<int> last(F, -1);

    for(int i = 0; i < n; i++) {
        sum += a[i][t[i]];
        last[t[i]] = i;
        for(int j = 0; j < F; j++)sum -= (i - last[j]) * c[j];
        //cout << max(sum + def, 0) << endl;
        cout << sum << endl;
    }
}