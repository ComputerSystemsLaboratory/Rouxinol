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

        void printTop() {
            cout << this->a << endl;
        }
};


int main () {
        int a,  b,  c,  d,  z,  f;
        cin >> a >>  b >>  c >>  d >>  z >>  f;
        Dice dd(a, b, c, d, z, f);
        char orders[100];
        scanf("%s", orders);
        for(int i=0; i<strlen(orders); i++) {
            if (orders[i] == 'S') {
                dd.s();
            }
            else if (orders[i] == 'E') {
                dd.e();
            }
            else if (orders[i] == 'W') {
                dd.w();
            }
            else if (orders[i] == 'N') {
                dd.n();
            }
        }
        dd.printTop();
        return 0;
}