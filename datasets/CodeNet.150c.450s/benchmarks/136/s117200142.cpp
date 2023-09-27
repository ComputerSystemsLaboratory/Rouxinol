#include <bits/stdc++.h>

using namespace std;

inline int gcd(int a, int b){
    int d_a = 0;
    while(!(a & 1)){ a >>= 1; ++d_a;}

    int d_b = 0;
    while(!(b & 1)){ b >>= 1; ++d_b;}

    while(a != b){
        if(a < b) swap(a, b);
        a -= b;
        do a >>= 1; while(!(a & 1));
    }

    return a << min(d_a, d_b);
}

int a, b;

int main(){
    while(cin >> a >> b){
        int c = gcd(a, b);
        cout << c << " " << (a / c) * b << endl;
    }
    return 0;
}