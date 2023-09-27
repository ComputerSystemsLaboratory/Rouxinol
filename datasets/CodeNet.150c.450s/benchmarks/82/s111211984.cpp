#include <iostream>
#include <array>

using namespace std;

enum dir_t {NORTH, EAST, WEST, SOUTH, CLKW, CCLKW};
enum face_t {TOP, BOTTOM, FRONT, BACK, LEFT, RIGHT};

face_t& operator++ (face_t& f) {
    f = static_cast<face_t>(f + 1);
    return f;
}

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

    face_t operator[](int32_t v) {
        for (face_t f = TOP; f <= RIGHT; ++f) {
            if (v == val[f]) {
                return f;
            }
        }
        return TOP;
    }

    void roll(dir_t dir) {
        switch (dir) {
            case NORTH: inner_roll(TOP, FRONT, BOTTOM, BACK); break;
            case EAST:  inner_roll(TOP, LEFT, BOTTOM, RIGHT); break;
            case WEST:  inner_roll(TOP, RIGHT, BOTTOM, LEFT); break;
            case SOUTH: inner_roll(TOP, BACK, BOTTOM, FRONT); break;
            case CLKW:  inner_roll(FRONT, RIGHT, BACK, LEFT); break;
            case CCLKW: inner_roll(FRONT, LEFT, BACK, RIGHT); break;
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
    int32_t top, bottom, front, back, left, right, q;

    cin >> top >> front >> right >> left >> back >> bottom >> q;

    Dice d(top, bottom, front, back, left, right);

    while (q--) {
        cin >> top >> front;

        switch (d[top]) {
            case BOTTOM: d.roll(NORTH); d.roll(NORTH); break;
            case FRONT:  d.roll(NORTH);                break;
            case BACK:   d.roll(SOUTH);                break;
            case LEFT:   d.roll(EAST);                 break;
            case RIGHT:  d.roll(WEST);                 break;
            default:                                   break;
        }

        switch (d[front]) {
            case BACK:  d.roll(CLKW); d.roll(CLKW); break;
            case LEFT:  d.roll(CCLKW);              break;
            case RIGHT: d.roll(CLKW);               break;
            default:                                break;
        }

        cout << d[RIGHT] << endl;
    }

    return 0;
}