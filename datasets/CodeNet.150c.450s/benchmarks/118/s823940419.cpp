#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N--) {
        int Y, M, D, day = 0, cnt = 0;
        cin >> Y >> M >> D;
        while (Y != 1000 || M != 1 || D != 1) {
            D++; cnt++;
            if (Y % 3 == 0 || M % 2 == 1) {
                day = 20;
                if (D > day) {
                    D = 1;
                    M++;
                }
            } else {
                day = 19;
                if (D > day) {
                    D = 1;
                    M++;
                }
            }
            if (M > 10) {
                Y++; M = 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}