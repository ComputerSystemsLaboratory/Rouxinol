#include <iostream>
#include <string>
#include <cstdio>
#include <cctype>

using namespace std;

int main(void) {

    while (true) {
        string line;
        getline(cin, line);

        if (line.size() == 1 && line[0] == '0') { break; }

        int total = 0;
        for (int i = 0; i < line.size(); ++i) {
            total += line[i] - '0';
        }
        printf("%d\n", total);
    }

    return 0;
}