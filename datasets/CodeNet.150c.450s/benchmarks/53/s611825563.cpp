#include<iostream>
using namespace std;
#include<cstdio>
#include<cmath>

int prime[3500];
int find_prime();
int prime_search(int, int, int, int);

int main(void)
{
    int n = find_prime();

    int a;
    scanf("%d", &a);
    int end = int(sqrt(a * 1.0)) + 1;

    printf("%d:", a);
    for(int i = 0; prime[i] < end; i++){
        if(a % prime[i] == 0){
            do{
                printf(" %d", prime[i]);
                a = a / prime[i];
            }while(a % prime[i] == 0);
        }
        if(a == 1) break;
    }
    if(a > 1){ printf(" %d", a); }
    printf("\n");

    return 0;
}

int find_prime()
{
    int n, lim;
    prime[0] = 2, prime[1] = 3, prime[2] = 5, prime[3] = 7;
    n = lim = prime_search(4, 2, 32, 0);
    n = lim = prime_search(n, 32, 180, lim);
    return prime_search(n, 180, 31700, lim);
}

int prime_search(int n, int from, int to, int lim)
{
    int i, j;
    for(i = from; i < to; i++){
        if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0) continue;
        for(j = 0; j < lim; j++){
            if(i % prime[j] == 0) break;
        }
        if(j == lim){ prime[n] = i; n++; }
    }
    return n;
}