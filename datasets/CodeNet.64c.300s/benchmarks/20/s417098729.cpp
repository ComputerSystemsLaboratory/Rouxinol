#include <iostream>
#include <cstdio>
using namespace std;

int f(int x){
        return x * x;
}

int area(int d) {
    int upper = 600/d; //x軸の上限
    int s = 0;  // 面積初期化

    // 計算
    for (int i = 0; i < upper; i++) {
        s += f((600-d) - i * d) * d;
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
