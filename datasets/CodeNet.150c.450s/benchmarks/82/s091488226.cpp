#include<iostream>
using namespace std;

class Dice {
    public:
        int *num;

        Dice(int *n) {
            num = n;
        }

        void move(char c) {
            int n[6];
            for (int i = 0; i < 6; i++) {
                n[i] = num[i];
            }
            if (c == 'N') {
                num[0] = n[1];
                num[1] = n[5];
                num[4] = n[0];
                num[5] = n[4];
            } else if (c == 'S') {
                num[0] = n[4];
                num[1] = n[0];
                num[4] = n[5];
                num[5] = n[1];
            } else if (c == 'W') {
                num[0] = n[2];
                num[2] = n[5];
                num[3] = n[0];
                num[5] = n[3];
            } else {
                num[0] = n[3];
                num[2] = n[0];
                num[3] = n[5];
                num[5] = n[2];
            }
        }
};

int main() {
    int num[6], n, up, front;
    for (int i = 0; i < 6; i++) {
        cin >> num[i];
    }
    cin >> n;
    Dice d(num);

    for (int i = 0; i < n; i++) {
        cin >> up >> front;

        for (int j = 0; j < 4; j++) {
            if (d.num[1] == front) break;
            d.move('S');
        }
        if (d.num[1] != front) {
            d.move('W');
            for (int j = 0; j < 4; j++) {
                if (d.num[1] == front) break;
                d.move('S');
            }
        }
        while (d.num[0] != up) {
            d.move('W');
        }
        cout << d.num[2] << endl;
    }
}