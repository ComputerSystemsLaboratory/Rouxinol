#include <stdio.h>
#define NIL -1

long long fibs[50];

int fibs_(int n){
    if(fibs[n] != NIL)
        return fibs[n];

    if (n >= 2)
        fibs[n] = fibs_(n - 1) + fibs_(n - 2);

    return fibs[n];
}

void init(){
    for(int i = 0; i < 45; i++){
        fibs[i] = NIL;
    }
    fibs[0] = 1;
    fibs[1] = 1;
}


int main(void){
    init();

    int n;
    scanf("%d", &n);

    for(int i = 2; i < n; i++){
        int _;
        _ = fibs_(i);
    }

    printf("%d\n", fibs_(n));

    return 0;
}

