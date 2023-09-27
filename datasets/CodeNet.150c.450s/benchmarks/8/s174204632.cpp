#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int main() {
    int n;
    cin >> n;
    int a = 0;
    int b = 0;
    REP(i,n) {
        string s,t;
        cin >> s >> t;
        if (s > t) {
            a += 3;
        }else if (t > s) {
            b += 3;
        }else {
            a += 1; b += 1;
        }
    }
    cout << a << " " << b << endl;
    return 0;
}