#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

#define rep(i,n) for(int i=0;i<(int)n;i++)

int cou[5][4][11];

int main() {
    int n;
    while (true) {
        int m, f, r;
        cin >> m >> f >> r;
        if (m == -1 && f == -1 && r == -1)return 0;

        int tot = 0;
        if (m != -1)tot += m;
        if (f != -1)tot += f;

        if (m == -1 || f == -1)cout << 'F' << endl;
        else if (tot >= 80)cout << 'A' << endl;
        else if (tot >= 65)cout << 'B' << endl;
        else if (tot >= 50)cout << 'C' << endl;
        else if (tot >= 30) {
            if (r >= 50)cout << 'C' << endl;
            else cout << 'D' << endl;
        }
        else cout << 'F' << endl;
    }
}
