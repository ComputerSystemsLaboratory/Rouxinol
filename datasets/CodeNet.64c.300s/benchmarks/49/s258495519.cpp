#include <iostream>
#include <cstdio>
using namespace std;

int digit(int num) {
    int cnt = 0;
    while(num != 0) {
        cnt++;
        num /= 10;
    }
    return(cnt);
}

int main(void) {
    int a, b;
    
    while(scanf("%d %d", &a, &b) != EOF) {
        cout << digit(a + b) << endl;
    }
    
    return(0);
}