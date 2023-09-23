#include<stdio.h>
#include<ctype.h>
int swapUpDown(int c) {
    if(islower(c)) {
        c=toupper(c);
    } else if(isupper(c)) {
        c=tolower(c);
    }
    return c;
}

int main() {
    int c;
    while((c = getchar()) != EOF) {
        putchar(swapUpDown(c)); 
    }
    return 0;
}
