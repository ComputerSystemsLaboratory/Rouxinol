#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)

int a[5];
int main(void){
    rep(i, 5) cin >> a[i];
    sort(a, a+5, greater<int>());
    rep(i, 4) cout << a[i] << " ";
    cout << a[4] << endl;
}