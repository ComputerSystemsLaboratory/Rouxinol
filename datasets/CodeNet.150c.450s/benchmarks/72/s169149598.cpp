#include <iostream>
#include <cctype>
int main() {
    char s[1201] = {'\0'};
    scanf("%[^\n]", s);
    for (char* pc = s; *pc != '\0'; pc++) {
        // *pc ??? \0 ??????????????§?????????
        if ('a' <= *pc && *pc <= 'z') *pc = toupper(*pc);
        else if ('A' <= *pc && *pc <= 'Z') *pc = tolower(*pc);
    }
    printf("%s\n", s);
    return 0;
}