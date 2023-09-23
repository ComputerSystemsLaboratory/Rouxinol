#include <cstdio>
using namespace std;
int main() {
    char c;
    while (scanf("%c", &c) != EOF) {
        if (65 <= c && c <= 90)
            c += 32;
        else if (97 <= c && c <= 122)
            c -= 32;
        printf("%c", c);
    }
}