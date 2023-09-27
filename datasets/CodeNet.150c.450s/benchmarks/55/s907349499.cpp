#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
    char x[1001];
    int i, s;

    for(;;){
        scanf("%s", x);
        if(x[0] == '0' && x[1] == '\0') break;
        s = 0;
        for(i = 0; x[i] != '\0'; i++)
            s += x[i] - '0';
        printf("%d\n", s);
    }
    return 0;
}
