#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int sum, n, mmin, mmax, a;
    while(1) {
        sum = 0; mmax = -1; mmin = 114514810;
        cin >> n;
        if(n == 0) break;
        
        for(int i=0; i<n; i++) {
            cin >> a;
            sum += a;
            mmax = max(mmax, a);
            mmin = min(mmin, a);
        }
        sum = sum - mmax - mmin;
        cout << sum / (n-2) << endl;
    }
    
    return 0;
}