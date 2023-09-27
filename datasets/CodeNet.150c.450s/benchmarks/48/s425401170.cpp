#include <bits/stdc++.h>

using namespace std;

int main() {

    int e;

    while(cin >> e, e) {

        int x, y, z, m = 1 << 24;

        for(z = 0; z * z * z <= e; ++z) {
            y = floor(sqrt(e - z * z * z));
            m = min(m, (e - y * y - z * z * z) + y + z);
        }

        cout << m << endl;

    }

}