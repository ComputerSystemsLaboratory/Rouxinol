#include <iostream>

class Dice
{
public:
    Dice(int s1, int s2, int s3, int s4, int s5, int s6);
    void rollE();
    void rollN();
    void rollS();
    void rollW();
    void rollR();
    void rollL();
    bool rollToTop(int v);
    bool rollToFrontHorizontal(int v);
    int getTop();
    int getRight();
private:
    int ms1, ms2, ms3, ms4, ms5, ms6;
};

Dice::Dice(int s1, int s2, int s3, int s4, int s5, int s6)
: ms1(s1), ms2(s2), ms3(s3), ms4(s4), ms5(s5), ms6(s6)
{}

void Dice::rollE() {
    int tmp = ms1;
    ms1 = ms4;
    ms4 = ms6;
    ms6 = ms3;
    ms3 = tmp;
}

void Dice::rollN() {
    int tmp = ms1;
    ms1 = ms2;
    ms2 = ms6;
    ms6 = ms5;
    ms5 = tmp;
}

void Dice::rollS() {
    int tmp = ms1;
    ms1 = ms5;
    ms5 = ms6;
    ms6 = ms2;
    ms2 = tmp;
}

void Dice::rollW() {
    int tmp = ms1;
    ms1 = ms3;
    ms3 = ms6;
    ms6 = ms4;
    ms4 = tmp;
}

void Dice::rollR() {
    int tmp = ms2;
    ms2 = ms4;
    ms4 = ms5;
    ms5 = ms3;
    ms3 = tmp;
}

void Dice::rollL() {
    int tmp = ms2;
    ms2 = ms3;
    ms3 = ms5;
    ms5 = ms4;
    ms4 = tmp;
}

bool Dice::rollToTop(int v) {
    bool ret = true;
    if (v == ms1) {
        // NOP
    } else if (v == ms2) {
        rollN();
    } else if (v == ms3) {
        rollW();
    } else if (v == ms4) {
        rollE();
    } else if (v == ms5) {
        rollS();
    } else if (v == ms6) {
        rollN();
        rollN();
    } else {
        ret = false;
    }
    return ret;
}

bool Dice::rollToFrontHorizontal(int v) {
    bool ret = true;
    if (v == ms1) {
        ret = false;
    } else if (v == ms2) {
        // NOP
    } else if (v == ms3) {
        rollL();
    } else if (v == ms4) {
        rollR();
    } else if (v == ms5) {
        rollR();
        rollR();
    } else if (v == ms6) {
        ret = false;
    } else {
        ret = false;
    }
    return ret;
}

int Dice::getTop() {
    return ms1;
}

int Dice::getRight() {
    return ms3;
}

int main(int argc, const char *argv[]) {
    int s1, s2, s3, s4, s5, s6;
    std::cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6;
    Dice dice(s1, s2, s3, s4, s5, s6);
    int q;
    std::cin >> q;
    int v1, v2;
    for (int i = 0; i < q; i++) {
        std::cin >> v1 >> v2;
        dice.rollToTop(v1);
        dice.rollToFrontHorizontal(v2);
        std::cout << dice.getRight() << std::endl;
    }
    return 0;
}