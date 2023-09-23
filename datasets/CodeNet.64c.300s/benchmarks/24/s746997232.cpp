#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define RREP(i,n) for(int i = (n)-1; i >= 0; i--)
#define FOR(i, l, r) for(int i = l; i < r; i++)
#define RFOR(i, l,r) for(int i= (l)-1; i>= (r) ; i--)

#define int64 int64_t
#define uint64 uint64_t
#define uint unsigned

short a[10000], b[10000];
int n;

int main()
{
    while(cin >> n){
        if(n <= 0) break;

        REP(i, n)
            cin >> a[i] >> b[i];
        uint ap = 0;
        uint bp = 0;

        REP(i, n){
            if(a[i] > b[i])
                ap += a[i] + b[i];
            else if(a[i] < b[i])
                bp += a[i] + b[i];
            else{
                ap += a[i];
                bp += b[i];
            }
        }
        cout << ap << ' ' << bp << endl;
    }
}