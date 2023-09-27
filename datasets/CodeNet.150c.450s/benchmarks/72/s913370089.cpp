#include <cstdio>
#include <cctype>
using namespace std;
int main(void){
    char ch;
    while(true){
        scanf("%c", &ch);
        if(islower(ch)) ch = toupper(ch);
        else if(isupper(ch)) ch = tolower(ch);
        printf("%c", ch);
        if(ch == '\n') break;
    }

    return 0;
}

