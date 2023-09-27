#include <cstdio>
#include <list>
#include <string>

using namespace std;

int main() {
    size_t n;
    scanf("%zu", &n);

    list<int> l;
    for (size_t i=0; i<n; ++i) {
        char buf[1<<4];
        scanf("%s", buf);
        string command(buf);

        if (command == "insert") {
            int x;
            scanf("%d", &x);
            l.push_front(x);
        } else if (command == "delete") {
            int x;
            scanf("%d", &x);
            for (list<int>::iterator it=l.begin(); it!=l.end(); ++it)
                if (*it == x) {
                    l.erase(it);
                    break;
                }
        } else if (command == "deleteFirst") {
            l.pop_front();
        } else if (command == "deleteLast") {
            l.pop_back();
        }
    }

    for (list<int>::iterator it=l.begin(), last=--l.end(); it!=l.end(); ++it)
        printf("%d%c", *it, it!=last? ' ':'\n');

    return 0;
}