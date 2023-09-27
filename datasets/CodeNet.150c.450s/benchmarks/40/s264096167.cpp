#include <iostream>
#include <string>

using namespace std;

class Dice {
public:
    Dice(int32_t top, int32_t bottom, int32_t north, int32_t east, int32_t west, int32_t south) {
        t = top;
        b = bottom;
        n = north;
        e = east;
        w = west;
        s = south;
    }

    void rotate(uint8_t dir) {
        int32_t temp;
        switch (dir) {
            case 'N':
                temp = t;
                t = s;
                s = b;
                b = n;
                n = temp;
                break;
            case 'E':
                temp = t;
                t = w;
                w = b;
                b = e;
                e = temp;
                break;
            case 'W':
                temp = t;
                t = e;
                e = b;
                b = w;
                w = temp;
                break;
            case 'S':
                temp = t;
                t = n;
                n = b;
                b = s;
                s = temp;
                break;
        }
    }

    int32_t get_val(uint8_t face) {
        switch (face) {
            case 't': return t;
            case 'b': return b;
            case 'n': return n;
            case 'e': return e;
            case 'w': return w;
            case 's': return s;
        }

        return 0;
    }

private:
    int32_t t, b, n, e, w, s;
};

int main() {
    int32_t t, b, n, e, w, s;
    string op;

    cin >> t >> s >> e >> w >> n >> b >> op;

    Dice d(t, b, n, e, w, s);

    for (uint8_t dir : op) {
        d.rotate(dir);
    }

    cout << d.get_val('t') << endl;

    return 0;
}