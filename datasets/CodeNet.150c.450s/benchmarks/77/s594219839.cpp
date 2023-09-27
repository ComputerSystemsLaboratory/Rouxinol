#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m, x, y;
    int jewel_position[21][21];

    while (cin >> n && n) {
        for (int i=0; i<21; i++) {
            for (int j=0; j<21; j++) {
                jewel_position[i][j] = 0;
            }
        }

        for (int i=0; i<n; i++) {
            cin >> x >> y;
            jewel_position[x][y] = 1;
        }

        cin >> m;
        int x_pos = 10, y_pos = 10;
        for (int i=0; i<m; i++) {
            string direction;
            int amount;
            cin >> direction;
            cin >> amount;
            if (direction == "N") {
                for (int j=0; j<amount; j++) {
                    y_pos += 1;
                    jewel_position[x_pos][y_pos] = 0;
                }
            } else if (direction == "E") {
                for (int j=0; j<amount; j++) {
                    x_pos += 1;
                    jewel_position[x_pos][y_pos] = 0;
                }
            } else if (direction == "W") {
                for (int j=0; j<amount; j++) {
                    x_pos -= 1;
                    jewel_position[x_pos][y_pos] = 0;
                }
            } else {
                for (int j=0; j<amount; j++) {
                    y_pos -= 1;
                    jewel_position[x_pos][y_pos] = 0;
                }
            }
        }
        
        bool f = true;
        for (int i=0; i<21; i++) {
            for (int j=0; j<21; j++) {
                if (jewel_position[i][j]) {
                    f = false;
                }
            }
        }
        if (f) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}