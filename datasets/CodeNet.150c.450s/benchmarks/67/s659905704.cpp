#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int (i)=(0);(i)<(int)(n);++(i))
using ll = long long;


int main() {

    int n;
    while (cin >> n && n) {

        int p=1;
        int sum=0, ans=0;

        for (int i=1; i<n; ++i) {
            sum += i;
            if (sum >= n) {
                for (; sum>n && p<i; ++p) sum -= p;
                if (sum == n) ans++;
            }
        }

        cout << ans << endl;

    }

    return 0;

}