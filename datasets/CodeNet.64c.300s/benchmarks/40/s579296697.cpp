#include <iostream>
#include <string>
#include <cstdio>
#include <cctype>

using namespace std;


int main(void) {

    string line;
    getline(cin, line);

    for (int i = 0; i < line.size(); ++i) {
        char ch = line[i];
        if (isalpha(ch)) {
            if (islower(ch)) { putchar(toupper(ch)); }
            else             { putchar(tolower(ch)); }
        }
        else {
            putchar(ch);
        }
    }
    printf("\n");

    return 0;
}