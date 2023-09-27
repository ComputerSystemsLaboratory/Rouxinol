// ruiseki-wa
#include <algorithm>
#include <iostream>
using namespace std;

int sum[100010];
int main(void)
{
    int n, k;
    while(1) {
        cin >> n >> k;
        if(n==0 && k==0) break;

        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) sum[i+1] = sum[i] + a[i]; // sum[i] := a[0]??????a[i-1]?????§??????(sum[0]=0)

        int ans = sum[k] - sum[0];
        for(int i=0; i<n-k; i++)
            ans = max(ans, sum[i+1+k] - sum[i+1]);
        cout << ans << endl;
    }

    return 0;
}