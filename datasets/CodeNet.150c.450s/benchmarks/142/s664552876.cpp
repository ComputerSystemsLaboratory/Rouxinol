#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = 1e9, mod = 1e9+7;
#define endl     '\n'
int a[200005];
void solve(){

}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n-k; i++){
        cout <<(a[i] < a[i+k] ? "Yes\n" : "No\n");
    }
    return 0;
}
