#include <cstdio>
#include <string>

using namespace std;

int main() {
    char buf[1<<11];
    fgets(buf, 1<<11, stdin);
    string s(buf);

    for (char c: s)
        printf("%c", (c>='A'&&c<='Z')||(c>='a'&&c<='z')? c^0x20:c);

    return 0;
}