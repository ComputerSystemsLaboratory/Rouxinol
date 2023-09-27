#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <cassert>
#include <cctype>
#include <cstdio>
#include <cstring>

using namespace std;

const char* INSERT       = "insert";
const char* DELETE       = "delete";
const char* DELETE_FIRST = "deleteFirst";
const char* DELETE_LAST  = "deleteLast";

int main(void) {

    int n;
    cin >> n;

    list<int> nodes;
    char command[15];
    for (int i = 0; i < n; ++i) {
//        cin >> command;       // NG?
        scanf("%s", command);   // OK?
//        printf("[echo] %s\n", command);
//        cout << "[echo] " << command << endl;
        if (strncmp(command, INSERT, 6) == 0) {
//            printf("[command] Insert\n");
            int x;
            cin >> x;
            nodes.push_front(x);
        }
        else if (strncmp(command, DELETE_FIRST, 11) == 0) {
//            printf("[command] Delete First\n");
            nodes.pop_front();
        }
        else if (strncmp(command, DELETE_LAST, 10) == 0) {
//            printf("[command] Delete Last\n");
            nodes.pop_back();
        }
        else if (strncmp(command, DELETE, 6) == 0) {
//            printf("[command] Delete\n");
            int x;
            cin >> x;
            list<int>::iterator it;
            for (it = nodes.begin(); it != nodes.end(); ++it) {
                if (*it == x) {
                    break;
                }
            }
            if (it != nodes.end()) {
                nodes.erase(it);
            }
        }
    }

    list<int>::iterator it = nodes.begin();
    printf("%d", *it);
    for ( ++it ; it != nodes.end(); ++it) {
        printf(" %d", *it);
    }
    printf("\n");

    return 0;
}