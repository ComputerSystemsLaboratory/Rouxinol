#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

class Dice {
    private:
        std::vector<int> number;
        std::vector<int> initialize();
        std::string order_list;
        void decide_order();
        void decide_slide();
        int times;
        int top;
        int front;
    public: 
        int set_times();
        std::string set_order();
        std::string set_slide();
        void move(std::string orders); 
        void slide(std::string orders); 
        void print(); 
        Dice() {
            number = initialize();
        }
};

int main(void) {
    Dice dice;
    std::string orders;
    int times = dice.set_times();
    for (int i = 0; i < times; i++) {
        orders = dice.set_order();
        dice.move(orders);
        orders = dice.set_slide();
        dice.slide(orders);
        dice.print();
    }
    return EXIT_SUCCESS;
}

std::vector<int> Dice::initialize() {
    number.resize(6);
    int temp;
    for (int surface = 0; surface < 6; surface++) {
        std::cin >> number[surface];
    }
    return number;
}

void Dice::decide_order() {
    std::string move_data[] = {"", "N", "W", "E", "S", "NN"};
    std::vector<std::string> move(move_data, move_data + 6);
    for (int i = 0; i < 6; i++) {
        if (top == number[i]) {
            order_list = move_data[i];                 
            break;
        }
    }
    return;
}

void Dice::decide_slide() {
    std::string move_data[] = {"", "", "L", "R", "RR", ""};
    std::vector<std::string> move(move_data, move_data + 6);
    for (int i = 1; i <= 4; i++) {
        if (front == number[i]) {
            order_list = move_data[i];                 
            break;
        }
    }
}

int Dice::set_times() {
    std::cin >> times;
    return times;
}

std::string Dice::set_order() {
    std::cin >> top;
    decide_order();
    return order_list;
}

std::string Dice::set_slide() {
    std::cin >> front;
    decide_slide();
    return order_list;
}

void Dice::move(std::string orders) {
    std::vector<int> new_dice(6 ,0);
    int deflt_data[] = {1, 2, 3, 4, 5, 6};
    std::vector<int> deflt(deflt_data, deflt_data + 6);
    int east_data[] = {4, 2, 1, 6, 5, 3};
    std::vector<int> east(east_data, east_data + 6);
    int west_data[] = {3, 2, 6, 1, 5, 4};
    std::vector<int> west(west_data, west_data + 6);
    int south_data[] = {5, 1, 3, 4, 6, 2};
    std::vector<int> south(south_data, south_data + 6);
    int north_data[] = {2, 6, 3, 4, 1, 5};
    std::vector<int> north(north_data, north_data + 6);

    std::string dir;
    for (int loop = 0; loop < orders.size(); loop++) {
        dir = orders[loop]; 
        if (dir == "E") {
            for (int loop = 0; loop < 6; loop++) {
                new_dice[deflt[loop] - 1] = number[east[loop] - 1];
            }
        } else if (dir == "W") {
            for (int loop = 0; loop < 6; loop++) {
                new_dice[deflt[loop] - 1] = number[west[loop] - 1];
            }
        } else if (dir == "S") {
            for (int loop = 0; loop < 6; loop++) {
                new_dice[deflt[loop] - 1] = number[south[loop] - 1];
            }
        } else if (dir == "N") {
            for (int loop = 0; loop < 6; loop++) {
                new_dice[deflt[loop] - 1] = number[north[loop] - 1];
            }
        }
        number = new_dice;
    }
    return;
}

void Dice::slide(std::string orders) {
    std::vector<int> new_dice(6 ,0);
    int deflt_data[] = {1, 2, 3, 4, 5, 6};
    std::vector<int> deflt(deflt_data, deflt_data + 6);
    int right_data[] = {1, 4, 2, 5, 3, 6};
    std::vector<int> right(right_data, right_data + 6);
    int left_data[] = {1, 3, 5, 2, 4, 6};
    std::vector<int> left(left_data, left_data + 6);

    std::string dir;
    for (int loop = 0; loop < orders.size(); loop++) {
        dir = orders[loop]; 
        if (dir == "R") {
            for (int loop = 0; loop < 6; loop++) {
                new_dice[deflt[loop] - 1] = number[right[loop] - 1];
            }
        } else if (dir == "L") {
            for (int loop = 0; loop < 6; loop++) {
                new_dice[deflt[loop] - 1] = number[left[loop] - 1];
            }
        }
        number = new_dice;
    }
    return;
}

void Dice::print() {
    /*
       for (int surface = 0; surface < number.size(); surface++) {
       std::cout << number[surface] << " ";
       }
       std::cout << std::endl;
     */
    std::cout << number[2] << std::endl;
    return;
}