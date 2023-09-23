#include <bits/stdc++.h>
using namespace std;

int a[15];
int t, m, A, B;

bool dfs(int k, int A, int B)
{
    if(k == 10) return true;
    if(a[k] > A) {
        if(dfs(k + 1, a[k], B))
            return true;
    }
    if(a[k] > B) {
        if(dfs(k + 1, A, a[k]))
            return true;
    }
    return false;
}

int main()
{
    cin >> t;
    while(t--) {
        for(int i = 0; i < 10; ++i) {
            cin >> a[i];
        }

        if(dfs(0, 0, 0)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}