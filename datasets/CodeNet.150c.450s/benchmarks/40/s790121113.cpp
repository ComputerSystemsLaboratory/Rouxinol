#include <iostream>
#include <array>
#include <string>

using namespace std;

enum dir_t {NORTH, EAST, WEST, SOUTH};
enum face_t {TOP, BOTTOM, FRONT, BACK, LEFT, RIGHT};

class Dice {
public:
    Dice(int32_t top, int32_t bottom, int32_t front, int32_t back, int32_t left, int32_t right) {
        val[TOP]    = top;
        val[BOTTOM] = bottom;
        val[FRONT]  = front;
        val[BACK]   = back;
        val[LEFT]   = left;
        val[RIGHT]  = right;
    }

    int32_t operator[](face_t f) {
        return val[f];
    }

    void roll(dir_t dir) {
        switch (dir) {
            case NORTH: inner_roll(TOP, FRONT, BOTTOM, BACK); break;
            case EAST:  inner_roll(TOP, LEFT, BOTTOM, RIGHT); break;
            case WEST:  inner_roll(TOP, RIGHT, BOTTOM, LEFT); break;
            case SOUTH: inner_roll(TOP, BACK, BOTTOM, FRONT); break;
        }
    }

private:
    array<int32_t, 6> val;

    void inner_roll(face_t f1, face_t f2, face_t f3, face_t f4) {
        int32_t temp;
        temp = val[f1];
        val[f1] = val[f2];
        val[f2] = val[f3];
        val[f3] = val[f4];
        val[f4] = temp;

        return;
    }
};

int main() {
    int32_t top, bottom, front, back, left, right;
    string op;

    cin >> top >> front >> right >> left >> back >> bottom >> op;

    Dice d(top, bottom, front, back, left, right);

    for (uint8_t dir : op) {
        switch (dir) {
            case 'N': d.roll(NORTH); break;
            case 'E': d.roll(EAST);  break;
            case 'W': d.roll(WEST);  break;
            case 'S': d.roll(SOUTH); break;
        }
    }

    cout << d[TOP] << endl;

    return 0;
}