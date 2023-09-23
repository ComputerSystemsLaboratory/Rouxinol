#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

#define rep(i,n) for(int i=0;i<(int)n;i++)

int cou[5][4][11];

int main() {
    int n;
    cin >> n;

    rep(i, n) {
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        cou[b][f][r] += v;
    }


    for (int tou = 1; tou <= 4; tou++) {
        for (int kai = 1; kai <= 3; kai++) {
            for (int ban = 1; ban <= 10; ban++) {
                cout << ' ' << cou[tou][kai][ban];
            }
            cout << endl;
        }
        if(tou!=4)cout << "####################" << endl;
    }
}
