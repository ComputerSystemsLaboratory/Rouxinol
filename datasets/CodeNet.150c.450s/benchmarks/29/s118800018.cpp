#include <cstdio>
#include <string>
#include <list>
#include <algorithm>

int getValue(std::string text) {
    char number[11];
    std::snprintf(number, text.length(), "%s\n", text.c_str());
    return std::atoi(number);
}

int main() {

    const int BUF_SIZE = 24;

    int commandCount;
    std::scanf("%d\n", &commandCount);

    std::list<int> list;
    while (commandCount--) {
        char command[BUF_SIZE];
        std::fgets(command, sizeof(command), stdin);
        std::string command_str(command);

        if (command_str.substr(0, 6) == "insert") {
            auto number = command_str.substr(7);
            int value = getValue(number);
            list.emplace_front(value);
        } else if (command_str.substr(0, 11) == "deleteFirst") {
            list.pop_front();
        } else if (command_str.substr(0, 10) == "deleteLast") {
            list.pop_back();
        } else if (command_str.substr(0, 6) == "delete") {
            auto number = command_str.substr(7);
            int value = getValue(number);
            const auto deleteItr = std::find(list.begin(), list.end(), value);
            if (deleteItr != list.end()) {
                list.erase(deleteItr);
            }
        }
    }

    auto itr = list.cbegin();
    const auto endItr = list.cend();
    std::printf("%d", *itr);
    for (++itr; itr != endItr; ++itr) {
        std::printf(" %d", *itr);
    }
    std::puts("");

    return 0;

}