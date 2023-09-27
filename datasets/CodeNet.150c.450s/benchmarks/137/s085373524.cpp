#include <iostream>
#include <string>
#include <map>
#include <cstdio>
using namespace std;

int main(void) {
    int n;
    char order[8], str[16];
    map<string, bool> dict;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %s", order, str);
        if (order[0] == 'i') {
            dict[string(str)] = true;
        } else {
            if (dict[string(str)]) {
                printf("yes\n");
            } else {
                printf("no\n");
            }
        }
    }

    return 0;
}