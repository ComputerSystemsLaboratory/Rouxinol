#include <cstdio>
#include <cctype>
using namespace std;
int main(void){
    char ch;
    while(1){
        scanf("%c",&ch);
        if(!isalpha(ch)){
            printf("%c",ch);
            if(ch=='\n')break;
            continue;
        }
        if(isupper(ch))printf("%c",tolower(ch));
        else printf("%c",toupper(ch));
    }
    return 0;
}