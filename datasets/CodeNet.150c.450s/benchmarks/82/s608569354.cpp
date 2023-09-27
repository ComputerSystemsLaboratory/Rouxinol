#include <iostream>
using namespace std;
class Dice {
    private:
        int num[6];

    public:
        Dice(int *_num) {
            for (int i=0;i<6;i++) {
                num[i] = _num[i];
            }
        }

        int getRightNum(int top, int front) {
            int ret = 0;
            if (top == num[0]) {
                if (front == num[1]) ret = num[2];
                else if (front == num[2]) ret = num[4];
                else if (front == num[4]) ret = num[3];
                else if (front == num[3]) ret = num[1];
            } else if (top == num[1]) {
                if (front == num[0]) ret = num[3];
                else if (front == num[3]) ret = num[5];
                else if (front == num[5]) ret = num[2];
                else if (front == num[2]) ret = num[0];
            } else if (top == num[2]) {
                if (front == num[0]) ret = num[1];
                else if (front == num[1]) ret = num[5];
                else if (front == num[5]) ret = num[4];
                else if (front == num[4]) ret = num[0];
            } else if (top == num[3]) {
                if (front == num[0]) ret = num[4];
                else if (front == num[4]) ret = num[5];
                else if (front == num[5]) ret = num[1];
                else if (front == num[1]) ret = num[0];
            } else if (top == num[4]) {
                if (front == num[0]) ret = num[2];
                else if (front == num[2]) ret = num[5];
                else if (front == num[5]) ret = num[3];
                else if (front == num[3]) ret = num[0];
            } else if (top == num[5]) {
                if (front == num[1]) ret = num[3];
                else if (front == num[3]) ret = num[4];
                else if (front == num[4]) ret = num[2];
                else if (front == num[2]) ret = num[1];
            }
            return ret;
        }
};

int main() {
    int num[6], q, top, front;
    cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] >> num[5];
    Dice D(num);
    cin >> q;
    for (int i=0;i<q;i++) {
        cin >> top >> front;
        cout << D.getRightNum(top, front) << endl;
    }
    return 0;
}