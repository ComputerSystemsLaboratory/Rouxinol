#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;


int main(){
    int a, b;
    char* str;
    str = (char*)malloc(sizeof(char) * 50);

    while(fgets(str, 50, stdin) != NULL) {
        sscanf(str, "%d%d", &a, &b);
        cout << (int)log10(a+b) + 1 << endl;
    }

    return 0;
}
