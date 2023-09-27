#include <iostream>
using namespace std;

int main() {
    int a[4], b[4];
    while(true) {
        int hit = 0, blow = 0;
        for (int i = 0; i < 4; i++) {
            if (!(cin >> a[i])) {
                return 0;
            }
        }
        for (int i = 0; i < 4; i++) {
            if (!(cin >> b[i])) {
                return 0;
            }
        }
        for (int i = 0; i < 4; i++) {
            if (a[i] == b[i]) {
                hit++;
            }
            for (int j = 0; j < 4; j++){
                if (a[i] == b[j]) {
                    blow++;
                }
            }
        }
        blow -= hit;

        cout << hit << ' ' << blow << endl;
    }
}