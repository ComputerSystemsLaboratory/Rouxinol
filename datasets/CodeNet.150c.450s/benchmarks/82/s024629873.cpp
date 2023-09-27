#include <iostream>
#include <sstream>

class Dice {
public:
    int num[6];
    void move (char cmd) {
        if (cmd == 'N') north();
        if (cmd == 'S') south();
        if (cmd == 'E') east();
        if (cmd == 'W') west();
        if (cmd == 'R') right();
        if (cmd == 'L') left();
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
    void right () {
        move('W'); move('S'); move('E');
    }
    void left () {
        move('E'); move('S'); move('W');
    }
};

int main() {
    std::stringstream ss;
    Dice dice;
    for (int i=0;i<6;++i)
        std::cin >> dice.num[i];
    int q;
    std::cin >> q;
    for (int i=0;i<q;++i) {
        int top, front;
        std::cin >> top >> front;
        std::string cmd = "NNNEEE";
        for (int i=0;i<(int)cmd.size();++i) {
            if (dice.num[0] == top) break;
            else dice.move(cmd[i]);
        }
        cmd = "RRR";
        for (int i=0;i<(int)cmd.size();++i) {
            if (dice.num[1] == front) break;
            else dice.move(cmd[i]);
        }
        ss << dice.num[2] << std::endl;
    }
    std::cout << ss.str();
    
    return 0;
}
