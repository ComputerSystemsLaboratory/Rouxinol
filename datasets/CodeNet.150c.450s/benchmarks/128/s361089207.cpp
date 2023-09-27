#include <iostream>
#include <cstdio>
using namespace std;

int length(char chr[]) {
    int num = 0;
    for(int r = 0; r < 30; r++) {
        if(chr[r] == '\0') break;
        num++;
    }
    return(num);
}

int main(void) {
    char ary[30];
    scanf("%s", ary);
    int len = length(ary);
    
    for(int r = len - 1; r >= 0; r--) {
        putchar(ary[r]);
    }
    putchar('\n');
    
    //cout << len << endl;
    return(0);
}