#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int a, b;
    
    scanf("%d%d", &a, &b);

    if (a < b) swap(a, b); 

    while (1) {
        a = a%b;
        if (a < b) swap(a, b);   
        if (b == 0) break;
    }
    
    printf("%d\n", a);
    
    return 0;
}