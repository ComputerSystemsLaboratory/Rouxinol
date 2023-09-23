#include <cstdio>
#include <cctype>
char c;

int main(){
    while (1){
        scanf("%c", &c);
        if (isupper(c)){
            printf("%c", tolower(c));
        }
        else {
            printf("%c", toupper(c));
        }
        if (c == '\n') break;
    }
    return 0;
}