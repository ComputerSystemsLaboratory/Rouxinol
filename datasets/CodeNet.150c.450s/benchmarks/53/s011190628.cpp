#include <iostream>
#include <cstdio>
using namespace std;

int isPrime(int num){
    if(num == 2) return 1;
    if(num == 3) return 1;
    if(num == 4) return 0;
    if(num == 5) return 1;
    
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}


int main(){
    
    int input, div = 2;
    
    cin >> input;
    
    printf("%d:", input);
    
    if (isPrime(input)) {
        printf(" %d\n", input);
        return 0;
    }
    
    while (input != div) {
        if (input % div == 0) {
            input /= div;
            printf(" %d", div);
        }else{
            div++;
        }
    }
    printf(" %d\n", div);
    
    return 0;
}