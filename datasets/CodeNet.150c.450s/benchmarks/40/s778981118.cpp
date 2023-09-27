#include <iostream>
using namespace std;
class Dice {
    private:
        int num[6];
        void go2N() {
            int tmp = num[0];
            num[0] = num[1];
            num[1] = num[5];
            num[5] = num[4];
            num[4] = tmp;
        }
        void go2S() {
            int tmp = num[0];
            num[0] = num[4];
            num[4] = num[5];
            num[5] = num[1];
            num[1] = tmp;
        }
        void go2E() {
            int tmp = num[0];
            num[0] = num[3];
            num[3] = num[5];
            num[5] = num[2];
            num[2] = tmp;
        }
        void go2W() {
            int tmp = num[0];
            num[0] = num[2];
            num[2] = num[5];
            num[5] = num[3];
            num[3] = tmp;
        }

    public:
        Dice(int *_num) {
            for (int i=0;i<6;i++) {
                num[i] = _num[i];
            }
        }

        void go(char op) {
            switch (op) {
                case 'N':
                    go2N();
                    break;
                case 'S':
                    go2S();
                    break;
                case 'E':
                    go2E();
                    break;
                case 'W':
                    go2W();
                    break;
                default:
                    break;
            }
        }

        int getNum(int id) {
            int ret = 0;
            if (0 <= id && id < 6) ret = num[id];
            return ret;
        }
};

int main() {
    int num[6];
    string op;
    cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] >> num[5];
    Dice D(num);
    cin >> op;
    for (int i=0;i<op.size();i++) {
        D.go(op[i]);
    }
    cout << D.getNum(0) << endl;
    return 0;
}