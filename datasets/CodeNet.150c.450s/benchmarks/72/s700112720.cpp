#include <cstdio>
#include <cctype>
using namespace std;

int main () {
    char c;

    while (true) {
        scanf("%c", &c);
        if (c == '\n') {
            printf("\n");
            break;
        } else if (isupper(c)) {
            printf("%c", tolower(c));
        } else if (islower(c)) {
            printf("%c", toupper(c));
        } else {
            printf("%c", c);
        }
    }

    return 0;
}