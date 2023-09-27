#include <iostream>
#include <string>
using namespace std;

class Dice {
    public:
    int a, s, e, w, n, b;
    void setint(int a1, int s1, int e1, int w1, int n1, int b1);
    int geta();
    int gets();
    int getn();
    int gete();
    int getw();
    int getb();
    
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
int main(void){
    // Here your code !
    Dice dice;
    int n[6];
    for(int i=0;i<6;i++) {
        cin >> n[i];
    }
    string d;
    bool t1, t2, t3, t4;
    cin >> d;
    int r[6] = {1, 2, 3, 4, 5, 6};
    dice.setint(1, 2, 3, 4, 5, 6);
    for(int i=0;i<d.size();i++) {
        if (d[i] == 'S') {
            r[0] = dice.getn();
            r[1] = dice.geta();
            r[4] = dice.getb();
            r[5] = dice.gets();
            dice.setint(r[0], r[1], r[2], r[3], r[4], r[5]);
        } else if (d[i] == 'E') {
            r[0] = dice.getw();
            r[2] = dice.geta();
            r[3] = dice.getb();
            r[5] = dice.gete();
            dice.setint(r[0], r[1], r[2], r[3], r[4], r[5]);
        } else if (d[i] == 'W') {
            r[0] = dice.gete();
            r[2] = dice.getb();
            r[3] = dice.geta();
            r[5] = dice.getw();
            dice.setint(r[0], r[1], r[2], r[3], r[4], r[5]);
        } else {
            r[0] = dice.gets();
            r[1] = dice.getb();
            r[4] = dice.geta();
            r[5] = dice.getn();
            dice.setint(r[0], r[1], r[2], r[3], r[4], r[5]);
        }
    }
    cout << n[(r[0] + 5) % 6] << endl;
    
}