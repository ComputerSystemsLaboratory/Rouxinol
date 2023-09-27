#include <iostream>

using namespace std;

class Dice {
public:
        int face[6];

        int getRightFace(int up, int front);
};

int Dice::getRightFace(int up, int front)
{
        if ((up == face[1] && front == face[2]) ||
                (up == face[2] && front == face[4]) ||
                (up == face[3] && front == face[1]) ||
                (up == face[4] && front == face[3])) {
                return face[0];
        }

        if ((up == face[0] && front == face[3]) ||
                (up == face[2] && front == face[0]) ||
                (up == face[3] && front == face[5]) ||
                (up == face[5] && front == face[2])) {
                return face[1];
        }

        if ((up == face[0] && front == face[1]) ||
                (up == face[1] && front == face[5]) ||
                (up == face[4] && front == face[0]) ||
                (up == face[5] && front == face[4])) {
                return face[2];
        }

        if ((up == face[0] && front == face[4]) ||
                (up == face[1] && front == face[0]) ||
                (up == face[4] && front == face[5]) ||
                (up == face[5] && front == face[1])) {
                return face[3];
        }

        if ((up == face[0] && front == face[2]) ||
                (up == face[2] && front == face[5]) ||
                (up == face[3] && front == face[0]) ||
                (up == face[5] && front == face[3])) {
                return face[4];
        }

        return face[5];
}

int main()
{
        Dice dice;

        for (int i = 0; i < 6; i++) {
                cin >> dice.face[i];
        }
        int q;
        cin >> q;
        for (int i = 0; i < q; i++) {
                int up, front;
                cin >> up >> front;
                cout << dice.getRightFace(up, front) << endl;
        }

        return 0;
}