#include <iostream>
#include <string>
using namespace std;

class Dice {
    public:
    int a, s, e, w, n, b;
    int r[6] = {1, 2, 3, 4, 5, 6};
    void setint(int a1, int s1, int e1, int w1, int n1, int b1);
    int geta();
    int gets();
    int getn();
    int gete();
    int getw();
    int getb();
    void moveS();
    void moveN();
    void moveE();
    void moveW();
};

void Dice::setint(int a1, int s1, int e1, int w1, int n1, int b1) {
    a = a1;
    s = s1;
    n = n1;
    e = e1;
    w = w1;
    b = b1;
}

int Dice::geta() {
    return a;
}
int Dice::gets() {
    return s;
}
int Dice::getn() {
    return n;
}
int Dice::gete() {
    return e;
}
int Dice::getw() {
    return w;
}
int Dice::getb() {
    return b;
}
void Dice::moveS() {
    r[0] = getn();
    r[1] = geta();
    r[4] = getb();
    r[5] = gets();
    setint(r[0], r[1], r[2], r[3], r[4], r[5]);
}
void Dice::moveE() {
    r[0] = getw();
    r[2] = geta();
    r[3] = getb();
    r[5] = gete();
    setint(r[0], r[1], r[2], r[3], r[4], r[5]);
}
void Dice::moveW() {
    r[0] = gete();
    r[2] = getb();
    r[3] = geta();
    r[5] = getw();
    setint(r[0], r[1], r[2], r[3], r[4], r[5]);
}
void Dice::moveN() {
    r[0] = gets();
    r[1] = getb();
    r[4] = geta();
    r[5] = getn();
    setint(r[0], r[1], r[2], r[3], r[4], r[5]);
}

int main(void){
    // Here your code !
    Dice dice;
    int n[6];
    for(int i=0;i<6;i++) {
        cin >> n[i];
    }
    dice.setint(n[0], n[1], n[2], n[3], n[4], n[5]);
    int p, q;
    int k1, k2;
    int t[4];
    cin >> p;
    for(int i=0;i<p;i++) {
        cin >> k1 >> k2;
        for(int j=0;j<6;j++) {
            if(k1 == n[j]) {
                q = j+1;
            }
        }
        switch(q) {
                case 1:
                    t[0] = n[1];
                    t[1] = n[3];
                    t[2] = n[4];
                    t[3] = n[2];
                    break;
                case 2:
                    t[0] = n[5];
                    t[1] = n[3];
                    t[2] = n[0];
                    t[3] = n[2];
                    break;
                case 3:
                    t[0] = n[5];
                    t[1] = n[1];
                    t[2] = n[0];
                    t[3] = n[4];
                    break;
                case 4:
                    t[0] = n[1];
                    t[1] = n[5];
                    t[2] = n[4];
                    t[3] = n[0];
                    break;
                case 5:
                    t[0] = n[0];
                    t[1] = n[3];
                    t[2] = n[5];
                    t[3] = n[2];
                    break;
                case 6:
                    t[0] = n[4];
                    t[1] = n[3];
                    t[2] = n[1];
                    t[3] = n[2];
                    break;
            }
        for(int j=0;j<4;j++) {
            if(k2 == t[j]) {
                cout << t[(j+3)%4] << endl;
            }
        }
    }
}