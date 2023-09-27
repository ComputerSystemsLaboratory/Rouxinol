#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++)
    {
        cout << v[i] << " ";
    }
    cout << v[n - 1] << endl;
}
