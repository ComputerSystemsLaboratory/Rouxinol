#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int main() {
    int N;
    cin >> N;
    int crtmin;
    int crtmax = -2e9;
    cin >> crtmin;
    REP(i,N-1) {
        int n;
        cin >> n;
        crtmax = max(crtmax, n - crtmin);
        crtmin = min(crtmin, n);
    }
    cout << crtmax << endl;
    return 0;
}