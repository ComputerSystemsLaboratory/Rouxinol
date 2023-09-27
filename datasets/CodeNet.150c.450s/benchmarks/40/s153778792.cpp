#include <iostream>
using namespace std;

class Dice {
public:
    // top, front, right, left, rear, bottom
    int label[6];

    void rotate(char dir) {
        int t;
        switch (dir) {
            case 'E':
                t = label[0];
                label[0] = label[3];
                label[3] = label[5];
                label[5] = label[2];
                label[2] = t;
                break;
            case 'W':
                t = label[0];
                label[0] = label[2];
                label[2] = label[5];
                label[5] = label[3];
                label[3] = t;
                break;
            case 'S':
                t = label[0];
                label[0] = label[4];
                label[4] = label[5];
                label[5] = label[1];
                label[1] = t;
                break;
            case 'N':
                t = label[0];
                label[0] = label[1];
                label[1] = label[5];
                label[5] = label[4];
                label[4] = t;
                break;
        }
    }
};


int main(void) {
    Dice d;
    string s;
    for (int i = 0; i < 6; i++) {
        cin >> d.label[i];
    }
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        d.rotate(s[i]);
    }

    cout << d.label[0] << endl;
    return 0;
}