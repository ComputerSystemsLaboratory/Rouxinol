#include <bits/stdc++.h>
using namespace std;

int n, ans[10001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i * i <= n; i++)
        for(int j = 1; j * j <= n; j++)
            for(int k = 1; k * k <= n; k++){
                int val = i * i + j * j + k * k + i * j + j * k + i * k;
                if(val <= n) ans[val]++;
            }
    for(int i = 1; i <= n; i++)
        cout << ans[i] << '\n';
    return 0;
}
