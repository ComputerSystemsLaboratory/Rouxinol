#include <iostream>

class Dice {
public:
    int num[6];
    void move (char cmd) {
        if (cmd == 'N') north();
        if (cmd == 'S') south();
        if (cmd == 'E') east();
        if (cmd == 'W') west();
    }
    void north () {
        std::swap(num[0], num[1]);
        std::swap(num[1], num[5]);
        std::swap(num[5], num[4]);
    }
    void south () {
        std::swap(num[0], num[4]);
        std::swap(num[4], num[5]);
        std::swap(num[5], num[1]);
    }
    void east () {
        std::swap(num[0], num[3]);
        std::swap(num[3], num[5]);
        std::swap(num[5], num[2]);
    }
    void west () {
        std::swap(num[0], num[2]);
        std::swap(num[2], num[5]);
        std::swap(num[5], num[3]);
    }
};

int main() {
    Dice dice;
    for (int i=0;i<6;++i)
        std::cin >> dice.num[i];
    std::string cmd;
    std::cin >> cmd;
    for (int i=0;i<(int)cmd.size();++i)
        dice.move(cmd[i]);
    std::cout << dice.num[0] << std::endl;
    
    return 0;
}
