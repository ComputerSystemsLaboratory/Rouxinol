#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    while(1) {
        int n;
        int a[5001] = {0};
        long int ans = -10000000;
        cin >> n;
        if(n == 0) break;

        for(int i=0; i<n; i++)
            cin >> a[i];

        for(int i=0; i<n; i++) {
            long int sum = 0;
            for(int j=i; j<n; j++) {
                sum += a[j];
                ans = max(ans, sum);
            }
        }
        cout << ans << endl;
    }

    return 0;
}