#include <iostream>
#include <limits.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int N, r, i;
    int min=INT_MAX, ans=INT_MIN;
     
    cin >> N;
    rep(i,N) {
        cin >> r;
        if(r-min > ans) ans = r-min;
        if(r < min) min = r;
    }
    cout << ans << endl;
    return 0;
}