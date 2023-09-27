#include <algorithm>
#include <deque>
#include <iostream>
#include <list>
#include <string>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;

    std::string command;
    int key;
    std::deque<int> l;
    for (int i = 0; i < n; i++) {
        std::cin >> command;
        if (command[0] == 'i') {
            std::cin >> key;
            l.push_front(key);
        } else if (command.length() == 6) {
            std::cin >> key;
            std::deque<int>::iterator itr = find(l.begin(), l.end(), key);
            if (itr != l.end()) l.erase(itr);
        } else if (command[6] == 'F') {
            l.pop_front();
        } else if (command[6] == 'L') {
            l.pop_back();
        }
    }

    for (int i = 0; i < l.size() - 1; i++) {
        std::cout << l[i] << " ";
    }
    std::cout << l.back() << std::endl;

    return 0;
}