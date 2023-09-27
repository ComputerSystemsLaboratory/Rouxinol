#include<iostream>
#include<string>
#define REP(i, n) for (int i = 0; i < (int)n; ++i)
using namespace std;
int y[100];
int main() {
    while(1) {
        int n, a, b, c, x;
        cin >> n >> a >> b >> c >> x;
        if (n == 0) break;
        REP(i, n) cin >> y[i];

        int i = 0;
        int frame;
        for (frame = 0; frame <= 10000; ++frame) {
            if (y[i] == x) {
                i++;
                if (i == n) break;
            }
            x = (x * a + b) % c;
        }
        cout << (frame > 10000 ? -1 : frame) << endl;
    }
}
