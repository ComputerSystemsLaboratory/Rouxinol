#include <stdio.h>
#include <list>
#include <string>
using namespace std;

void print(const list<int> &values) {
    bool flag = false;
    for (const auto &v : values) {
        if (flag) printf(" ");
        printf("%d", v);
        flag = true;
    }
    printf("\n");
}

void deleteFirst(list<int> &values) {
    values.pop_front();
}

void deleteLast(list<int> &values) {
    values.pop_back();
}

void deleteValue(list<int> &values, int x) {
    for(auto it = values.begin(); it != values.end(); it++) {
        if (*it == x) {
            values.erase(it);
            break;
        }
    }
}

void insert(list<int> &values, int x) {
    values.push_front(x);
}

int main() {
    int n;
    scanf("%d", &n);

    list<int> values;

    for (int i = 0; i < n; i++) {
        char tmpCommand[20];
        int x = 0;
        scanf("%s", tmpCommand);

        string command = string(tmpCommand);
        if (command == "insert") {
            scanf("%d", &x);
            insert(values, x);
        } else if (command == "delete") {
            scanf("%d", &x);
            deleteValue(values, x);
        } else if (command == "deleteFirst") {
            deleteFirst(values);
        } else if (command == "deleteLast") {
            deleteLast(values);
        }
    }

    print(values);
}