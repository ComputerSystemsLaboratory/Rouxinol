#include "iostream"
#include "string"
#include "cctype"
#include <stdio.h>

int main()
{
    char ch;
    while (1){
        scanf("%c", &ch);
        char temp;
        if (ch == '\n')
            break;
        if(islower(ch)){
            temp = toupper(ch);
            std::cout << temp;
        }
        else if (isupper(ch)){
            temp = tolower(ch);
            std::cout << temp;
        }
        else
            std::cout << ch;

    }
    std::cout << std::endl;
    return 0;
}