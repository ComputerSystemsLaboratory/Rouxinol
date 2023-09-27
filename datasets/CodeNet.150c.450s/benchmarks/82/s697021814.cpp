#include <iostream>
#include <cstring>

using namespace std;

class Dice {
public:
    Dice(int pips[]) {
        for (int i = 0; i < 6; i++) {
            this->pips[i] = pips[i];
        }
    }

    int getTopPip() {
        return pips[0];
    }

    void roll(char direction) {
        memcpy(tmpPips, pips, sizeof(int) * 6);
        if (direction == 'E') {
            pips[0] = tmpPips[3];
            pips[2] = tmpPips[0];
            pips[3] = tmpPips[5];
            pips[5] = tmpPips[2];
        } else if (direction == 'N') {
            pips[0] = tmpPips[1];
            pips[1] = tmpPips[5];
            pips[4] = tmpPips[0];
            pips[5] = tmpPips[4];
        } else if (direction == 'W') {
            pips[0] = tmpPips[2];
            pips[2] = tmpPips[5];
            pips[3] = tmpPips[0];
            pips[5] = tmpPips[3];
        } else {
            pips[0] = tmpPips[4];
            pips[1] = tmpPips[0];
            pips[4] = tmpPips[5];
            pips[5] = tmpPips[1];
        }
    }

    int getRightPip(int top, int front) {
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 4; j++) {
                if (pips[check[i][j]] == top &&
                    pips[check[i][j + 1]] == front) {
                        return pips[i];
                    }
            }
        }
    }

private:
    int pips[6];
    int tmpPips[6];
    // top, frontの順番でラベルがマッチした時、外側のindexがrightのラベル
    int check[6][5] = {
        {3, 1, 2, 4, 3}, {5, 2, 0, 3, 5},
        {0, 1, 5, 4, 0}, {4, 5, 1, 0, 4},
        {3, 0, 2, 5, 3}, {4, 2, 1, 3, 4}};
};

int main() {
    int pips[6], num;
    string directions;

    for (int i = 0; i < 6; i++) {
        cin >> pips[i];
    }
    cin >> num;

    Dice dice(pips);

    for (int i = 0; i < num; i++) {
        int top, front;
        cin >> top >> front;
        cout << dice.getRightPip(top, front) << "\n";
    }

    return 0;
}
