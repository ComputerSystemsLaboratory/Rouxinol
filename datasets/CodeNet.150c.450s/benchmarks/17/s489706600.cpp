#include <iostream>
#include <cstdio>
using namespace std;
#include <algorithm>

int main(int argc, const char * argv[])
{
    int n[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n[i]);
    }
    sort(&n[0], &n[5]);
    reverse(&n[0], &n[5]);
    
    for (int i = 0; i < 5; i++) {
        printf("%d", n[i]);
        if (i != 4) {
            printf(" ");
        }
    }
    puts("");
    
    return 0;
}