#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define FOR(i,a,b) for(int i=int(a);i<int(b);++i)
#define RFOR(i,a,b) for(int i=int(b)-1;i>=int(a);--i)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)

int N;

int main()
{
    int l,m,n,a,b;
    string h,t;
    cin >> N;
    a = b = 0;
    REP(i,N) {
        cin >> h >> t;
        n = min(l = h.size(),m = t.size());
        REP(j,n){
            if (h[j]>t[j]) {
                a+=3;
                break;
            } else if (h[j]<t[j]) {
                b+=3;
                break;
            } else if (j==n-1) {
                if (l==m) {
                    ++a;
                    ++b;
                } else {
                    if (l>m) a+=3;
                    else b+=3;
                }
                break;
            }
        }
    }
    cout << a << " " << b << endl;
    return 0;
}

