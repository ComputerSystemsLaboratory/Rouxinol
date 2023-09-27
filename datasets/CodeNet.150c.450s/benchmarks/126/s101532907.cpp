#include <iostream>

using namespace std;

int cross[16][16];

void init() {
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            cross[i][j] = -1;
        }
    }
    cross[0][0] = 1;
}

int main() {
    while (true) {
        int a, b; cin >> a >> b;
        if (a == 0 && b == 0) break;
        int n;    cin >> n;
        init();
    
        int x, y; // blocked x, y;
        while (n--) {
            cin >> x >> y;
            cross[y-1][x-1] = 0;
        }
    
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < a; j++) {
                if (cross[i][j] == -1) {
                    if (1 <= i && 1 <= j) {
                        cross[i][j] = cross[i][j-1] + cross[i-1][j];
                    } else if (1 <= i) {
                        cross[i][j] = cross[i-1][j];
                    } else if (1 <= j) {
                        cross[i][j] = cross[i][j-1];
                    }
                }
            }
        }
    
//        for (int i = 0; i < b; i++) {
//            for (int j = 0; j < a; j++) {
//                cout << cross[i][j] << ' ';
//            }
//            cout << endl;
//        }
    
        cout << cross[b-1][a-1] << endl;
    }

    return 0;
}