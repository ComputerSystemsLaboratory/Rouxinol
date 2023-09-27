#include <iostream>

class Dice
{
public:
    Dice(int s1, int s2, int s3, int s4, int s5, int s6);
    void rollE();
    void rollN();
    void rollS();
    void rollW();
    int getTop();
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

int Dice::getTop() {
    return ms1;
}

int main(int argc, const char *argv[]) {
    int s1, s2, s3, s4, s5, s6;
    std::cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6;
    Dice dice(s1, s2, s3, s4, s5, s6);
    std::string orders;
    std::cin >> orders;
    for (int i = 0; i < orders.size(); i++) {
        switch (orders[i])
        {
        case 'E' : dice.rollE(); break;
        case 'N' : dice.rollN(); break;
        case 'S' : dice.rollS(); break;
        case 'W' : dice.rollW(); break;
        }
    }
    std::cout << dice.getTop() << std::endl;
    return 0;
}