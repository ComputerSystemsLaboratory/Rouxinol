#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <map>
#include <iostream>

using namespace std;

#define rep(i, N) for (int i = 0; i < N; ++i)


int main() {
    int n, strMax = 12;
    scanf("%d", &n);
    char action[strMax], key[strMax];
    char *ins = "insert";
    char *fin = "find";
    map<string, bool> data;
    rep(i, n) {
        scanf("%s %s", action, key);
        if (strcmp(ins, action) == 0) {
            data[key] = 1;
        } else if (strcmp(fin, action) == 0) {
            if (data[key] == 1) {
                printf("yes\n");
            } else {
                printf("no\n");
            }
        }
    }

    return 0;
}
