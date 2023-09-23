#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, amin = 1000001, amax = -1000001;
    long sum = 0;
    cin >> n;

    while (n--) {
        cin >> a;
        amin = min(amin, a);
        amax = max(amax, a);
        sum += a;
    }

    cout << amin << " " << amax << " " << sum << endl;

    return 0;
}