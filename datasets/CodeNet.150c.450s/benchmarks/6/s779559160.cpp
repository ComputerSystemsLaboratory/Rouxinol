#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    if (a<b){
        if (b<c){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
}

