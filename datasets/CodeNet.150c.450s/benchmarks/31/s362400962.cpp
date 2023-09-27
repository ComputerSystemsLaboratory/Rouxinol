#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;
 
int main() {
    int n,r;
    int min = INT_MAX, ans=INT_MIN;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> r;
        if(r-min>ans) ans= r-min;
        if(r<min) min =r;
    }
    cout << ans << endl;
    
    return 0;
}