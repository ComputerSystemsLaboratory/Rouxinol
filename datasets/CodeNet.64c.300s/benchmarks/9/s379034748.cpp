#include <bits/stdc++.h>
using namespace std;
int main() {
    int d = 100000;
    int n; cin >> n;
    for(int i = 0 ; i < n ; i++){
        d = d * 105 / 100;
        if( d % 1000 > 0 ) d += 1000 - d % 1000;
    }
    cout << d << endl;
}
