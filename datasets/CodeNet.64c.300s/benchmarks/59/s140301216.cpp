#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int prime_judge(int value);

int main() {
    int i, n, cnt;
    int a;
    
    scanf("%d", &n);
    
    cnt = 0;
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        cnt += prime_judge(a);
    }
    
    printf("%d\n", cnt);
    
    return 0;
}

//?´???°??????
int prime_judge(int value) {
    int i;
    int flag = 1;
    for (i = 2; i <= sqrt(value); i++) {
        if ((value % i) == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}