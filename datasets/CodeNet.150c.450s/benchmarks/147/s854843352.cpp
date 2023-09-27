#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

//#define int long long
//signed main(){
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        int cnt=0;
        for(int x = 1; x <= 100; x++) {
            for(int y = 1; y <= 100; y++) {
                for(int z = 1; z <= 100; z++) {
                    int tmp=x*x+y*y+z*z+x*y+y*z+z*x;
                    if(tmp>i) break;
                    if(i==tmp) cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}
