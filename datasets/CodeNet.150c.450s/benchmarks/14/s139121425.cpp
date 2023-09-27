#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

bool include3(int x) {
    while(x) {
        if (x % 10 == 3) return true;
        else x /= 10;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    For(i,1,n+1) {
        if (i % 3 == 0 || include3(i)) cout << " " << i;
    }
    cout << endl;
    return 0;
}