#include <iostream>
#include <string>

using namespace std;

class Dice {
public:
    int surface[6];

    void goNorth() {
        int temp = surface[0];
        surface[0] = surface[1];
        surface[1] = surface[5];
        surface[5] = surface[4];
        surface[4] = temp;
    }

    void goEast() {
        int temp = surface[0];
        surface[0] = surface[3];
        surface[3] = surface[5];
        surface[5] = surface[2];
        surface[2] = temp;
    }

    void goSouth() {
        int temp = surface[0];
        surface[0] = surface[4];
        surface[4] = surface[5];
        surface[5] = surface[1];
        surface[1] = temp;
    }

    void goWest() {
        int temp = surface[0];
        surface[0] = surface[2];
        surface[2] = surface[5];
        surface[5] = surface[3];
        surface[3] = temp;
    }

    void putAnswer() {
        cout << surface[0] << endl;
    }
};

int main() {
    Dice dice;

    for (int i = 0; i < 6; i++) {
        cin >> dice.surface[i];
    }

    string order;
    cin >> order;
    int times = order.size();
    for (int i = 0; i < times; i++) {
        char str = order[i];
        switch (str) {
            case 'N':
                dice.goNorth();
                break;
            case 'E':
                dice.goEast();
                break;
            case 'S':
                dice.goSouth();
                break;
            case 'W':
                dice.goWest();
                break;
        }
    }
    dice.putAnswer();
}