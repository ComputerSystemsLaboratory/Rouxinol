#include <cstdio>
#include <cstdlib>
using namespace std;
int main() {
    char c;
    int s = 0;
    while (scanf("%c", &c) != EOF) {
        if (c == '\n') {
            printf("%d\n", s);
            s = 0;
        } else if (c == '0' && s == 0) {
            break;
        }
        else {
            s += atoi(&c);
        }
    }
}