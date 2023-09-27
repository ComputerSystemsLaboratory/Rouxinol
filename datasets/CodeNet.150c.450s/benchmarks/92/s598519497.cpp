#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void) {
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF) {
        cout << (int)log10(a + b) + 1 << endl;
    }
    return(0);
}