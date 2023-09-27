#include<iostream>
using namespace std;
int i, p, r, q, cnt = 0;
int c[7];
int main() {
    c[1] = 500; c[2] = 100; c[3] = 50;
    c[4] = 10;  c[5] = 5;   c[6] = 1;
    while(cin >> p) {
        if(p == 0) { break; }
        r = 1000 -p;
        while(r > 0) {
            for (i=1; i<=6; i++) {
                q = r / c[i];
                cnt = cnt + q;
                r -= c[i] * q;
                if(r==0) {break;}
            }
        }
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}