#include <bits/stdc++.h>
using namespace std;

class Dice {
private:
    int* face;
    int* relative;

public:
    Dice();
    ~Dice();
    void SetNumber(int index, int num);
    int ReturnRight(int top, int front);
};

Dice::Dice() {
    face = new int[6];
    relative = new int[55];
    relative[12] = relative[24] = relative[43] = relative[31] = 0;
    relative[3] = relative[35] = relative[52] = relative[20] = 1;
    relative[1] = relative[15] = relative[54] = relative[40] = 2;
    relative[4] = relative[45] = relative[51] = relative[10] = 3;
    relative[2] = relative[25] = relative[53] = relative[30] = 4;
    relative[13] = relative[34] = relative[42] = relative[21] = 5;
}

Dice::~Dice() {
    delete[] face;
    delete[] relative;
}

void Dice::SetNumber(int index, int num) {
    face[index] = num;
}

int Dice::ReturnRight(int top, int front) {
    int top_index, front_index;
    for (int i = 0; i < 6; ++i) {
        if (face[i] == top) top_index = i;
        if (face[i] == front) front_index = i;
    }
    return face[relative[top_index * 10 + front_index]];
}

int main() {
    Dice dice;
    int num;
    for (int i = 0; i < 6; ++i) {
        cin >> num;
        dice.SetNumber(i, num);
    }
    int time;
    cin >> time;
    int top, front;
    for (int i = 0; i < time; ++i) {
        cin >> top >> front;
        cout << dice.ReturnRight(top, front) << endl;
    }

    return 0;
}
