#include <stdio.h>

#define MAX 2000000
#define UNCHECKED 0
#define PRIME 1
#define COMPO 2


bool isPrime(int n);

int main(void){
    int n;
    int primes;
    
    while (scanf("%d", &n)!=EOF){
        primes = 0;
        for (int i=2; i<=n; i++){
            if (isPrime(i)) primes++;
        }
        printf("%d\n", primes);
    }
}

bool isPrime(int n){
    static int table[MAX]={0};
    static int minPrime=2;
    
    if (n<2) return 0;
    
    do{
        if (table[n] != UNCHECKED){
            return table[n] == PRIME ? 1 : 0;
        }
        table[minPrime] = PRIME;
        for (int i=2; i*minPrime<=MAX; i++){
            table[i*minPrime] = COMPO;
        }
        while (minPrime<=MAX && table[minPrime]!=UNCHECKED) minPrime++;
    }while(minPrime<=MAX);
}