#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <ctype.h>
#include <algorithm>
using namespace std;
int gcd(int a, int b) {
    if(b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}
 
int num  = 1000000007;

long long ex(long long x, int n) {
    long long res = 1;
    while(n > 0) {
        if(n & 1) { res *= x; }
        x *= x;
        x %= num;
        n >>= 1;
        res %= num;
    }
    return res;
}

int main() {
    long long m,x,y;
    int n;
    cin >> m >> n;
    x = ex(m , n);
    y = x%num;
    cout << y << endl;
    return 0;
}
