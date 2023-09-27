#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    
    while (1) {
        scanf("%c", &ch);
        if (ch == '\n') {
            break;
        }
        
        if (islower(ch)) {
            ch = toupper(ch);
        }
        else if (isupper(ch)) {
            ch = tolower(ch);
        }
        printf("%c", ch);
    }
    printf("\n");
}