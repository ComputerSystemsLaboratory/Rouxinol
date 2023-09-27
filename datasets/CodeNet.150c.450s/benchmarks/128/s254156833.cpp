#include <cstdio>
using namespace std;
char str[100];
int main() {
        while (~scanf("%s", str)) {
            char *ptr = str;
            while (*ptr) ++ptr;
            for (--ptr; ptr >= str; --ptr) printf("%c", *ptr);
            puts("");
        }
}
