#include <iostream>
#include <cstdio>
using namespace std;
typedef long long l;
int main(void) {
    int n; cin >> n;
    l now = 100000;
    for(int r = 0; r < n; r++) {
        now += now / 20; //5/100を掛けるので
        //もし1000円未満が0でなければ、繰り上げを行う。
        if(now % 1000 != 0) now = now - (now % 1000) + 1000;
    }
    cout << now << endl;
    return(0);
}