#include <stdio.h>
#include <iostream>
using namespace std;

#define NUM 100000
#define INF 1000000010
int L[NUM + 1];
int length = 0;

void init(){
    for(int i = 0; i <= NUM; i++){
        L[i] = INF;
    }
}

int main(void){
    init();

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);

        auto iter = lower_bound(L + 1, L + 1 + length, a);
        if(*iter == INF){
            length++;
        }
        *iter = a; 
    }
    
    printf("%d\n", length);
}

