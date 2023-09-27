#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

int main(void){
    int n;
    int y, m, d;
    cin >> n;
    rep(loop, n) {
        cin >> y >> m >> d;
        int day = 0;
        day += d;
        day += 20 * (m-1);
        if(y%3 != 0) day -= (m-1)/2;
        day += 590 * ((y-1) / 3);
        day += 195 * ((y-1) % 3);
        cout << 196471-day << endl;
    }
}