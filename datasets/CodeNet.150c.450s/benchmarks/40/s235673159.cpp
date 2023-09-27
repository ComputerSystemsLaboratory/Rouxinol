#include <iostream>

using namespace std;

int main() {
    class Dice {
        public:
            int men[6];
            void setMen(int i, int value) {men[i] = value;}
            void getMen() {cout << men[0] << endl;}
            void SwitchMen (char Alpha) {
                switch (Alpha) {
                    case 'S':
                        ChangeMen(men[4], men[0], men[2], men[3], men[5], men[1]);
                        break;
                    case 'N':
                        ChangeMen(men[1], men[5], men[2], men[3], men[0], men[4]);
                        break;
                    case 'E':
                        ChangeMen(men[3], men[1], men[0], men[5], men[4], men[2]);
                        break;
                    case 'W':
                        ChangeMen(men[2], men[1], men[5], men[0], men[4], men[3]);
                        break;
                }
            }
            void ChangeMen (int tmp1, int tmp2, int tmp3, int tmp4, int tmp5, int tmp6) {
                men[0] = tmp1;
                men[1] = tmp2;
                men[2] = tmp3;
                men[3] = tmp4;
                men[4] = tmp5;
                men[5] = tmp6;
            }
    };
    Dice dice;
    for(int i = 0; i < 6; i++) {
        int tmp;
        cin >> tmp;
        dice.setMen(i, tmp);
    }
    char Alpha;
    while(cin >> Alpha) {
        dice.SwitchMen(Alpha);
    }

    dice.getMen();

    // for(int i = 0; i < 6; i++) {
    //     cout << dice.men[i] << endl;
    // }

    return 0;
}
