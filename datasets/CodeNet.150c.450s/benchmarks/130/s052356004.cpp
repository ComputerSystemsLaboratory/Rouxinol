#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0 ; i < n; i ++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    vector<int> b(m);
    for(int i = 0; i < m; i++)
        cin >> b[i];
    vector<int> ans(n);
    for(int i = 0 ; i < n;i++){
        int sum = 0;
        for(int j = 0 ; j < m;j++){
            sum += a[i][j] * b[j];
        }
        ans[i] = sum;
    }
    for(int i = 0 ; i < n; i++)
        cout << ans[i] << endl;
    return 0;
}

