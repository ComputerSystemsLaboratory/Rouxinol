#include <iostream>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        bool gemsOnField[21][21] = {};
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            gemsOnField[y][x] = true;
        }
        int cx = 10, cy = 10, m;
        cin >> m;
        for (int i = 0; i < m; i++) {
            char d;
            int l;
            cin.ignore();
            cin >> d >> l;
            switch (d) {
            case 'N':
                for (int j = 0; j < l; j++) {
                    gemsOnField[++cy][cx] = false;
                }
                break;
            case 'E':
                for (int j = 0; j < l; j++) {
                    gemsOnField[cy][++cx] = false;
                }
                break;
            case 'S':
                for (int j = 0; j < l; j++) {
                    gemsOnField[--cy][cx] = false;
                }
                break;
            case 'W':
                for (int j = 0; j < l; j++) {
                    gemsOnField[cy][--cx] = false;
                }
                break;
            }
        }
        bool isAllGemsRecovered = true;
        for (int y = 0; y < 21; y++) {
            for (int x = 0; x < 21; x++) {
                if (gemsOnField[y][x]) {
                    isAllGemsRecovered = false;
                }
            }
        }
        if (isAllGemsRecovered) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}