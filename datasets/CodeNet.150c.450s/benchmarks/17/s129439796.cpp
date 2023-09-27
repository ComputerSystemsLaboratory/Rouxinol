#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define rrep(i,n) for(int i=n;i>=0;i--)
#define all(v) v.begin(),v.end()
template<typename T>T rad(T deg){return deg*M_PI/180;}

using namespace std;
int main() {
    int a[5];
    rep(i,5) cin >> a[i];
    sort(a,a+5);
    cout << a[4];
    rrep(i,3) cout << " " << a[i];
    cout << endl;
    return 0;
}