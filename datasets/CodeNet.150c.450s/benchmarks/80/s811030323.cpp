#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int main() {
    int A = 0;
    int B = 0;
    REP(i,4) {
        int j;
        cin >> j;
        A += j;
    }
    REP(i,4) {
        int j;
        cin >> j;
        B += j;
    }
    cout << max(A, B) << endl;
    return 0;
}