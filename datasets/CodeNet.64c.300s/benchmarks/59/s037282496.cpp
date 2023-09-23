#include <iostream>
#include <cmath>
using namespace std;

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define REP(i,a) for (int i=0;i<(a);i++) 

bool IsPrime(int n) {
    FOR(i, 2, int(sqrt(n))+1) {
        if(n%i==0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int cnt=0;
    REP(i, n) {
        int a;
        cin >> a;
        if (IsPrime(a)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}