#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

void solve7b(int a, int b) {
    int cnt = 0;
    for(int i = 1; i < a-1; i++) {
        for(int j = i+1; j < a; j++) {
            int k = b-i-j;
            if (k>=1 && k<=a && k>i && k>j) cnt++;
        }
    }
    cout << cnt << endl;
}

int main() {
    int a, b;
    while(cin >> a >> b, a+b) {
        solve7b(a,b);
    }
    return 0;
}