#include <iostream>
using namespace std;

class Square {
public:
    int x, y;
    void setXY(const int nx, const int ny) {
        x = nx;
        y = ny;
    }
};

int main() {
    const int directions[][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}, };
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        Square* squares = new Square [n];
        squares[0].setXY(0, 0);
        for (int i = 1; i < n; i++) {
            int nearby, d;
            cin >> nearby >> d;
            int nx = squares[nearby].x + directions[d][0],
                ny = squares[nearby].y + directions[d][1];
            squares[i].setXY(nx, ny);
        }
        int maxX, maxY, minX, minY;
        maxX = minX = squares[0].x;
        maxY = minY = squares[0].y;
        for (int i = 1; i < n; i++) {
            if (maxX < squares[i].x) {
                maxX = squares[i].x;
            } else if (squares[i].x < minX) {
                minX = squares[i].x;
            }
            if (maxY < squares[i].y) {
                maxY = squares[i].y;
            } else if (squares[i].y < minY) {
                minY = squares[i].y;
            }
        }
        cout << maxX - minX + 1 << " " << maxY - minY + 1 << endl;
        delete[] squares;
    }
}