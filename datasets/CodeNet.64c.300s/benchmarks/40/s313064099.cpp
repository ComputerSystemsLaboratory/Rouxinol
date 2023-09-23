
#include<cstdio>
#include<cctype>

using namespace std;

int main() {
    char ch;
    while (true) {
        scanf("%c", &ch);
        if (ch == '\n') break;
        else if (isalpha(ch)) {
            if (isupper(ch)) printf("%c", tolower(ch));
            else printf("%c", toupper(ch));
        }
        else printf("%c", ch);
    }
    printf("\n");
    return 0;
}
