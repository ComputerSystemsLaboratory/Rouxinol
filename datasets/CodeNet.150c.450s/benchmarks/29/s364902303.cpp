#include <iostream>
#include <list>
#include <algorithm>
int main() {
    int n;
    std::cin >> n;
    std::list<int> ls;
    std::string op;
    int x;
    while (n-- > 0) {
        std::cin >> op;
        if (op == "insert") {
            std::cin >> x;
            ls.push_front(x);
        } else if (op == "delete") {
            std::cin >> x;
            auto i = std::find(ls.begin(), ls.end(), x);
            if (i != ls.end()) {
                ls.erase(i);
            }
        } else if (op == "deleteFirst") {
            ls.pop_front();
        } else {
            ls.pop_back();
        }
    }
    for (auto i = ls.begin(); i != ls.end(); ++i) {
        std::cout << ((i == ls.begin()) ? "" : " ") << *i;
    }
    std::cout << std::endl;
}

