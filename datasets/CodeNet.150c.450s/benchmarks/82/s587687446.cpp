#include <bits/stdc++.h>

class Dice{
    private:
        std::vector<int> d;
    public:
        Dice(std::vector<int> a) {
            d = a;
            d.push_back(0); // tmp用
        }

        void N() {
            d.at(6) = d.at(1 - 1);
            d.at(1 - 1) = d.at(2 - 1);
            d.at(2 - 1) = d.at(6 - 1);
            d.at(6 - 1) = d.at(5 - 1);
            d.at(5 - 1) = d.at(6);
        }

        void S() {
            d.at(6) = d.at(1 - 1);
            d.at(1 -1 ) = d.at(5 - 1);
            d.at(5 - 1) = d.at(6 - 1);
            d.at(6 - 1) = d.at(2 - 1);
            d.at(2 - 1) = d.at(6);
        }

        void W() {
            d.at(6) = d.at(1 - 1);
            d.at(1 - 1) = d.at(3 - 1);
            d.at(3 - 1) = d.at(6 - 1);
            d.at(6 - 1) = d.at(4 - 1);
            d.at(4 - 1) = d.at(6);
        }

        void E() {
            d.at(6) = d.at(1 - 1);
            d.at(1 - 1) = d.at(4 - 1);
            d.at(4 - 1) = d.at(6 - 1);
            d.at(6 - 1) = d.at(3 - 1);
            d.at(3 - 1) = d.at(6);
        }

        void R() {
            // 右回転
            d.at(6) = d.at(2 -1);
            d.at(2 - 1) = d.at(4 - 1);
            d.at(4 - 1) = d.at(5 - 1);
            d.at(5 - 1) = d.at(3 - 1);
            d.at(3 - 1) = d.at(6);
        }

        void L() {
            // 左回転
            d.at(6) = d.at(2 - 1);
            d.at(2 - 1) = d.at(3 - 1);
            d.at(3 - 1) = d.at(5 - 1);
            d.at(5 - 1) = d.at(4 - 1);
            d.at(4 - 1) = d.at(6);
        }

        int get_dice_1() {
            return d.at(1 - 1);
        }
        int get_dice_2() {
            return d.at(2 - 1);
        }
        int get_dice_3() {
            return d.at(3 - 1);
        }
 };

int main(void) {
    using namespace std;

    vector<int> a(6);
    for (int i = 0; i < 6; i++) {
        cin >> a.at(i);
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        Dice dice(a);
        int a1, a2;
        cin >> a1 >> a2;
        int flg1 = false;
        for (int j = 0; j < 4; j++) {
            if (dice.get_dice_1() == a1) {
                flg1 = true;
                break;
            } else {
                dice.N();
            }
        }
        // flg1がfalseなら右回転させる
        if (!flg1) {
            dice.R();
            dice.N();
            if (dice.get_dice_1() == a1) {
                flg1 = true;
            } else {
                dice.S();
                dice.L();
            }
        }
        // まだダメなら左回転させる
        if (!flg1) {
            dice.L();
            dice.N();
        }
        // 1面は合ったので、あとは右回転させ続ける
        for (int j = 0; j < 4; j++) {
            if (dice.get_dice_2() == a2) {
                printf("%d\n", dice.get_dice_3());
                break;
            } else {
                dice.R();
            }
        }
    }

    return 0;
}
