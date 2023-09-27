#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

class Dice {
    public:
        int a, b, c, d, z, f;
        Dice(int a, int b, int c, int d, int z, int f) {
            this->a = a;
            this->b = b;
            this->c = c;
            this->d = d;
            this->z = z;
            this->f = f;
        }

        void s() {
            int tmp = this->b;
            this->b = this->a;
            this->a = this->z;
            this->z = this->f;
            this->f = tmp;
        }

        void e() {
            int tmp = this->c;
            this->c = this->a;
            this->a = this->d;
            this->d = this->f;
            this->f = tmp;
        }

        void n() {
            int tmp = this->b;
            this->b = this->f;
            this->f = this->z;
            this->z = this->a;
            this->a = tmp;
        }

        void w() {
            int tmp = this->c;
            this->c = this->f;
            this->f = this->d;
            this->d = this->a;
            this->a = tmp;
        }

        void zAxis() {
            int tmp = this->b;
            this->b = this->c;
            this->c = this->z;
            this->z = this->d;
            this->d = tmp;
        }

        void tf(int top, int front) {
            bool tp = this->a == top;
            bool ft = this->b == front;
            while (!(tp && ft)) {
                if (tp && !ft) {
                    while (!ft) {
                        this->zAxis();
                        ft = this->b == front;
                        if (ft) break;
                    }
                }
                else if (!tp && ft) {
                    while (!tp) {
                        this->e();
                        tp = this->a == top;
                        if (tp) break;
                    }

                }
                else {
                    this->s();
                    tp = this->a == top;
                    ft = this->b == front;
                }
            }
        }

        void printTop() {
            cout << this->a << endl;
        }
        void printRight() {
            cout << this->c << endl;
        }
};


int main () {
        int a,  b,  c,  d,  z,  f;
        cin >> a >>  b >>  c >>  d >>  z >>  f;
        int q;
        cin >> q;
        for(int i=0; i<q; i++) {
            Dice dd(a, b, c, d, z, f);
            int top, front;
            cin >> top >> front;
            dd.tf(top, front);
            dd.printRight();
        }
        return 0;
}