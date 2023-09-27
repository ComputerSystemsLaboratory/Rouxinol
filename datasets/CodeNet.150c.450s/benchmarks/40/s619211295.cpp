#include<iostream>

using namespace std;

class Dice {
    public:
        int D1;
        int D2;
        int D3;
        int D4;
        int D5;
        int D6;

        Dice(int d1, int d2, int d3, int d4, int d5, int d6);
        void Rotate_E();
        void Rotate_N();
        void Rotate_S();
        void Rotate_W();
        void Disp_D1();

};

Dice::Dice(int d1, int d2, int d3, int d4, int d5, int d6) {
    D1 = d1;
    D2 = d2;
    D3 = d3;
    D4 = d4;
    D5 = d5;
    D6 = d6;
}

void Dice::Rotate_E() {
    int tmp;

    tmp = D3;
    D3 = D1;
    D1 = D4;
    D4 = D6;
    D6 = tmp;
}

void Dice::Rotate_N() {
    int tmp;

    tmp = D5;
    D5 = D1;
    D1 = D2;
    D2 = D6;
    D6 = tmp;
}

void Dice::Rotate_S() {
    int tmp;

    tmp = D5;
    D5 = D6;
    D6 = D2;
    D2 = D1;
    D1 = tmp;
}

void Dice::Rotate_W() {
    int tmp;

    tmp = D3;
    D3 = D6;
    D6 = D4;
    D4 = D1;
    D1 = tmp;
}

void Dice::Disp_D1() {
    cout << D1 << endl;
}

int main() {

    int d1, d2, d3, d4, d5, d6;
    cin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6;

    Dice Dice1(d1, d2, d3, d4, d5, d6);

    string order;
    cin >> order;

    for (int i = 0; order[i] != 0; i++) {
        
        switch (order[i]) {
            case 'E':
                Dice1.Rotate_E();
                break;
            case 'N':
                Dice1.Rotate_N();
                break;
            case 'S':
                Dice1.Rotate_S();
                break;
            case 'W':
                Dice1.Rotate_W();
                break;
        }
    }

    Dice1.Disp_D1();

    return 0;
}
