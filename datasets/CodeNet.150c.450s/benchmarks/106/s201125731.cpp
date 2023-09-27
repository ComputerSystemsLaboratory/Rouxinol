#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int cnt = 0;
    For(i, a, b+1) {
        if (c % i == 0) cnt++;
    }
    cout << cnt << endl;
    return 0;
}