#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, n;
    cin >> a >> b >> c;
    
    for (int i = min(a, b); i <= max(a, b); i++) {
        n += (c % i == 0);
    }
    
    cout << n << endl;
    return 0;
}
