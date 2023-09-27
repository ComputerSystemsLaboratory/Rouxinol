#include <iostream>
using namespace std;
int main() {
    int n,x,ans,i,j,k;
    while (cin>>n>>x) {
        if (n == 0 && x == 0) break;
        ans = 0;
        for (i=1;i<n-1||i<=x/3;i++) {
            for (j=i+1;j<n||j<=x/2;j++) {
                if (j < x-i-j && x-i-j <= n) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}