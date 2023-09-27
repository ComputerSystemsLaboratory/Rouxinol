#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cctype>
 
using namespace std;
 
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);++i)
#define rep(i,n) FOR(i,0,n)

int main() {
    int n;
    cin >> n;
    int a[114];
    rep(i,n) cin >> a[i];

    int cnt_swap = 0;
    FOR(i,0,n) FOR(j,1,n) {
        if(a[j-1] > a[j]) swap(a[j-1], a[j]), ++cnt_swap;
    }

    rep(i,n) {
        cout << a[i];
        if(i != n-1) cout << " ";
    }
    cout << "\n";
    cout << cnt_swap << endl;


    return 0;
}