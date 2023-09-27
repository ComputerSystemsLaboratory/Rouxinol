#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;

    if(a < b && a < c && b < c) cout << "Yes" << endl;
    else cout << "No" << endl;

}
