//
// Created by 李青坪 on 2018/10/28.
//

#include <cstdio>
#include <algorithm>
#define MAXN 50
#define NIL -1
using namespace std;

int value[MAXN];

int fibonacci(int n){
    if (n == 0 || n == 1) {
        value[n] = 1;
        return 1;
    }
    if (value[n] != NIL) return value[n];
    value[n] = fibonacci(n-1) + fibonacci(n-2);
    return value[n];
}

int main(){
    fill(value, value+MAXN, NIL);
    int n;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
}
