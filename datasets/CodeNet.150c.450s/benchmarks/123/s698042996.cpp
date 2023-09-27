#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int isPrime(int x);

int main() {
    
    int N; 
    cin >> N;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);
        if (isPrime(x)) sum++;
    }

    cout << sum << '\n';
}

int isPrime(int x) {

    if (x < 2) return 0;
    else if (x == 2) return 1;
    if (x % 2  == 0) return 0;
    for (int i = 3; i*i <= x; i+=2) {
        if (x % i == 0) return 0;
    }
    return 1;
}

