#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

class Dice {
    private:
        std::vector<int> number;
        std::vector<int> initialize();
        std::string order_list;
        std::string decide_order();
    public: 
        std::string set_order();
        void move(std::string orders); 
        void print(); 
        Dice() {
            number = initialize();
            order_list = decide_order();
        }
};

int main(void) {
    Dice dice;
    std::string orders = dice.set_order();
    dice.move(orders);
    dice.print();
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

std::string Dice::decide_order() {
    std::cin >> order_list;
    return order_list;
}

std::string Dice::set_order() {
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

void Dice::print() {
/*
    for (int surface = 0; surface < number.size(); surface++) {
        std::cout << number[surface] << " ";
    }
    std::cout << std::endl;
    */
    std::cout << number[0] << std::endl;
    return;
}