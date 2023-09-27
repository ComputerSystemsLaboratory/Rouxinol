#include <bits/stdc++.h>
using namespace std;
#define INF 9999999999

int main() {
    int n;
    while(cin >> n) {
        if(n == 0) break;
        n++;
        int a[5010]; a[0] = 0;
        for(int i=1; i<n; i++) {
            cin >> a[i];
            a[i] += a[i-1];
        }

        int ret = -INF;
        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                ret = max(a[j] - a[i], ret);
            }
        }

        cout << ret << endl;
    }
    return 0;
}