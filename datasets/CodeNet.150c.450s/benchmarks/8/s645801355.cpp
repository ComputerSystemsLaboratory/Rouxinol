#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define FOR(i,a,b) for(int i=int(a);i<int(b);++i)
#define RFOR(i,a,b) for(int i=int(b)-1;i>=int(a);--i)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)

int main() {
    int a,b,N;
    string h,t;
    cin >> N;
    a = b = 0;
    REP(i,N) {
        cin >> h >> t;
        if (h==t) ++a,++b;
        else if (h>t) a+=3;
        else b+=3;
    }
    cout << a << " " << b << endl;
    return 0;
}
