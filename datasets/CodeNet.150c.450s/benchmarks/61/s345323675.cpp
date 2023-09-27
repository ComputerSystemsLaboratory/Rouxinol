#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c, x;
    while (cin>>n>>a>>b>>c>>x, n||x||a||b||c) {
        vector<int> p(n);
        for(auto& i: p) cin>>i;

        int count = 0;
        int i = 0;
        while (count <= 10000) {
            if (x == p[i]) {
                i++;
            }
            if (n == i) break;
            
            x = (a * x + b) % c;
            count++;
        }

        if (count > 10000) cout << -1 << endl;
        else cout << count << endl;
    }

    return 0;
}

