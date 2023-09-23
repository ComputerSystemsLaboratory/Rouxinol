#include<iostream>;
using namespace std;

int main() {
        int rooms[4][3][10], b, f, r, v, x, y, z, n;
        for (x = 0; x < 4; x++) {
                for (y = 0; y < 3; y++) {
                        for (z = 0; z < 10; z++) {
                                rooms[x][y][z] = 0;
                        }
                }
        }
        cin >> n;
        for (int i = 0; i < n; i++) {
                cin >> b >> f >> r >> v;
                rooms[b - 1][f - 1][r - 1] += v;
        }
        for ( x = 0; x < 4; x++) {
                for ( y = 0; y < 3; y++) {
                        for ( z = 0; z < 10; z++) {
                                cout << " " << rooms[x][y][z];
                        }
                        cout << endl;
                }
                if (x != 3) cout << "####################" << endl;
        }
        return 0;
}