#include<iostream>

using namespace std;

int main() {
    int n, a, b, c, x, y;
    while (true) {
        cin >> n >> a >> b >> c >> x;
        if (n == 0) {
            break;
        }
        int frame = 0;
        for (; n>0; n--) {
            cin >> y;
            while (x != y) {
                frame++;
                x = (a*x+b)%c;
                if (frame > 10000) {
                    for (n--; n>0; n--) {
                        cin >> y;
                    }
                    frame = -1;
                    break;
                }
            }
            if (n > 1) {
                frame++;
                x = (a*x+b)%c;
            }
        }
        cout << frame << endl;
    }
    return 0;
}