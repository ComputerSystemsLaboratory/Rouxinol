#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <algorithm>
#include <cstring>
#include <cstdio>

int main()
{
    int n;
    std::scanf("%d", &n);

    std::list<int> l;
    for (int i = 0; i < n; ++i) {
        char command[20];
        std::scanf("%s", command);

        if (std::strcmp(command, "insert") == 0) {
            int a;
            std::scanf("%d", &a);
            l.push_front(a);
        } else if (std::strcmp(command, "delete") == 0) {
            int a;
            std::scanf("%d", &a);
            std::list<int>::iterator it = l.begin();
            while (it != l.end()) {
                if (*it == a) {
                    break;
                }
                it++;
            }

            if (it != l.end()) {
                l.erase(it);
            }

        } else if (std::strcmp(command, "deleteFirst") == 0) {
            l.pop_front();
        } else if (std::strcmp(command, "deleteLast") == 0) {
            l.pop_back();
        }
    }

    std::list<int>::iterator it = l.begin();
    while (it != l.end()) {
        std::cout << *it;
        it++;
        if (it == l.end()) {
            std::cout << std::endl;
        } else {
            std::cout << " ";
        }
    }

    return 0;
}
