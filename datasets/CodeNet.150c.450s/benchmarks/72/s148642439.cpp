#include <cstdio>
#include <cctype>

int
main(int argc, const char *argv[])
{
    char c;
    while ((c = getchar()) != EOF) {
        if (isalpha(c)) {
            if (islower(c)) putchar(toupper(c));
            else putchar(tolower(c));
        } else putchar(c);
    }

    return 0;
}