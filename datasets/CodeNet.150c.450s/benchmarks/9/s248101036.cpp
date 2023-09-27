#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <cstring>

typedef struct _ORDER {
    char data[201]; // max of string.
    int effect_count;
    int shuffle_number[100]; // max of shuffle number is 100.
} ORDER;

class Shuffle {
    std::vector<ORDER> lst;
    std::list<char> shuffle_data;

public:
    bool run(void); // execute shuffle operation.

private:
    void read(void);
    void shuffle(void);
    void disp();
};

bool Shuffle::run()
{
    read();
    if (0 >= lst.size()) {
        return false;
    }
    shuffle();
    return true;
}

void Shuffle::read(void)
{
    ORDER tmp;
    std::string line;
    while (true) {
        std::memset(&tmp, 0, sizeof(tmp));
        std::cin >> line;
        if (0 == std::strcmp("-", line.c_str())) {
            break;
        }
        std::memcpy(tmp.data, line.c_str(), sizeof(tmp.data));
        std::cin >> tmp.effect_count;
        for (int i = 0; i < tmp.effect_count; i++) {
            std::cin >> tmp.shuffle_number[i];
        }
        lst.push_back(tmp);
    }
}

void Shuffle::shuffle()
{
    for (std::vector<ORDER>::const_iterator it = lst.begin(); it != lst.end(); it++) {
        int index = 0;
        shuffle_data.clear();
        while ('\0' != it->data[index]) {
            shuffle_data.push_back(it->data[index++]);
        }
        for (int i = 0; i < it->effect_count; i++) {
            for (int j = 0; j < it->shuffle_number[i]; j++) {
                char t = shuffle_data.front();
                shuffle_data.pop_front();
                shuffle_data.push_back(t);
            }
        }
        disp();
    }
}

void Shuffle::disp()
{
    for (std::list<char>::const_iterator it = shuffle_data.begin(); it != shuffle_data.end(); it++) {
        std::cout << *it;
    }
    std::cout << std::endl;
}

int main()
{
    Shuffle shuffle;
    (void) shuffle.run();
}