#include<cstdio>
#include<cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    char ch;
    while(1) {
        scanf("%c",&ch);
        if(isalpha(ch)){
            if(islower(ch)){
                printf("%c",toupper(ch));
            }
            else printf("%c", tolower(ch));
        }
        else printf("%c", ch);
        if(ch=='\n') break;
    }
    return 0;
}