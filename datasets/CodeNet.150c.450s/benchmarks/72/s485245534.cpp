#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
    char ch[1200];
    int i, n = 0;

    for(;;){
        scanf("%c", &ch[n]);
        if(ch[n] == '\n') break;

        if('A' <= ch[n] && ch[n] <= 'Z') 
            ch[n] += 32;
        else if('a' <= ch[n] && ch[n] <= 'z') 
            ch[n] -= 32;
        
        n++;
    }

    for(i = 0; i < n; i++){
        printf("%c", ch[i]);
    }
    putchar('\n');
    return 0;
}
