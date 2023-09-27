#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

std::vector<int> move (std::vector<int> dice, std::string dir) {
    std::vector<int> new_dice(6,0);
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
    if (dir == "E") {
        for (int loop = 0; loop < 6; loop++) {
            new_dice[deflt[loop] - 1] = dice[east[loop] - 1];
        }
    } else if (dir == "W") {
        for (int loop = 0; loop < 6; loop++) {
            new_dice[deflt[loop] - 1] = dice[west[loop] - 1];
        }
    } else if (dir == "S") {
        for (int loop = 0; loop < 6; loop++) {
            new_dice[deflt[loop] - 1] = dice[south[loop] - 1];
        }
    } else if (dir == "N") {
        for (int loop = 0; loop < 6; loop++) {
            new_dice[deflt[loop] - 1] = dice[north[loop] - 1];
        }
    }
    return new_dice;
}

void printDice (std::vector<int> dice); 

int main(void) {
    std::vector<int> dice(6,0);
    for (int surface = 0; surface < dice.size(); surface++) {
        std::cin >> dice[surface];
    }
    std::string dir_list;
    std::cin >> dir_list;
    std::string dir;
    for (int loop = 0; loop < dir_list.size(); loop++) {
        dir = dir_list[loop]; 
        dice = move(dice, dir);
    }
    std::cout << dice[0] << std::endl;
    return EXIT_SUCCESS;
}

void printDice (std::vector<int> dice) {
    for (int surface = 0; surface < dice.size(); surface++) {
        std::cout << dice[surface] << " ";
    }
    std::cout << std::endl;
    return;
}