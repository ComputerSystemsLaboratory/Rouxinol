#include <iostream>
#include <cstdio>
using namespace std;

int area(int d) {
    int i, x, y, s;
        s = 0;
        x = 600;
        i = 1;
        for(i = 1; d * i <= 600 - d; i++){
            y = (d * i) * (d * i);
            s += d * y;
        }
        
        
    return s;
    }

int main(void){
    int d;
    while(scanf("%d", &d) != EOF) {
       printf("%d\n", area(d));
    }
    return 0;
}
