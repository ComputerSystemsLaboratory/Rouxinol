#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
    int a, b;
    char sign[4];
    
    cin >> a >> b ;
    if(a < b){
        strcpy(sign, "<");
    }else if(a == b) {
        strcpy(sign, "==");
    }else {
        strcpy(sign, ">");
    }
    printf("a %s b\n", sign);
    
    return 0;
}