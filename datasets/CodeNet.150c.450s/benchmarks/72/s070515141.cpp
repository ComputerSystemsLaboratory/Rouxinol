#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <cctype>
 
using namespace std;
 
int main(void) {
    char c;
    while (true){
        scanf("%c", &c);
        if (c == '\n') break;
        if (isupper(c)) printf("%c", tolower(c));
        else if (islower(c)) printf("%c", toupper(c));
        else printf("%c", c);
    }
    cout << endl;
}