#include <iostream>
#include <map>

int main(void)
{
    std::map<const char, int> typeToIndex = { {'S', 0}, {'H', 1}, {'C', 2}, {'D', 3} };
    std::map<const int, char> indexToType = { {0, 'S'}, {1, 'H'}, {2, 'C'}, {3, 'D'} };
    bool card[4][13] = {false};
    int n;
    std::cin >> n;
    char type;
    int num;
    for(int i = 0; i < n; i++) {
        std::cin >> type >> num;
        card[typeToIndex[type]][num-1] = true;
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 13; j++) {
            if(card[i][j] == false) {
                std::cout << indexToType[i] << " " << j+1 << std::endl;
            }
        }
    }
}