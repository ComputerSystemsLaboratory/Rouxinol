#include <cctype>
#include <stdio.h>

using namespace std;

int main(){

        char word;

        while(true){
                scanf("%c",&word);
                if(islower(word)) printf("%c",toupper(word));
                else printf("%c",tolower(word));

                if(word == '\n') break;
        }       

        return 0;
}