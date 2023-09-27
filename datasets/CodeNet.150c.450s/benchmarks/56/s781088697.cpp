#include    <iostream>

using namespace std;

int main() {
    int n, mn = 1000000, mx = -1000000;
    long long sum = 0;
    auto min = [](int a, int b) { return a<b ? a : b; };
    auto max = [](int a, int b) { return a>b ? a : b; };
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        int buff;

        cin >> buff;
        mn = min(mn, buff);
        mx = max(mx, buff);
        sum += buff;
    }

    cout << mn << ' ' << mx << ' ' << sum << endl;

    return 0;
}
