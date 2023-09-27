#include <iostream>
#include <limits.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int n, r;
    int min=INT_MAX, ans=INT_MIN;
     
    cin >> n;
    for(int t=1; t<=n; t++) {
        cin >> r;
        if(r-min > ans) ans = r-min;
        if(r < min) min = r;
    }
    cout << ans << endl;
    return 0;
}