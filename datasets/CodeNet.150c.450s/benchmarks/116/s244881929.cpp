// syakutori
#include <algorithm>
#include <iostream>
using namespace std;

int ans, tmp;

int main(void)
{
    int n, k;
    while(1) {
        cin >> n >> k;
        if(n==0 && k==0) break;

        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        ans = 0;
        for(int i=0; i<k; i++) ans += a[i];
        tmp = ans;
        for(int i=0; i<n-k; i++) {
            tmp = tmp + a[k + i] - a[i];
            ans = max(ans, tmp);
        }
        cout << ans << endl;
    }

    return 0;
}