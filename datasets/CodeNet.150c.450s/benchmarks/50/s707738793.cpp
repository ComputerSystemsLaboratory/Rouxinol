#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
        const vector<int> coin{500,100,50,10,5,1};
        while (1) {
                int n, z, c=0;
                cin >> n;
                if (n == 0) break;
                z = 1000 - n;
                rep(i, coin.size()) {
                        c += z / coin.at(i);
                        z =  z % coin.at(i);
                }
                cout << c << endl;
        }
        return 0;
}
