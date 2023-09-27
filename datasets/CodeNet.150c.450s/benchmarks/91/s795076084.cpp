#include <bits/stdc++.h>

using namespace std;

#define MAX 1000100
#define LIM 1010

bool composite[MAX + 100];
int prime[MAX + 100];

void sieve()
{
    for(int i = 2; i <= LIM; i++){
        for(int j = i * i; j <= MAX; j += i)
            composite[j] = true;
    }
    int counter = 0;
    for(int i = 2; i <= MAX; i++){
        if(!composite[i]) counter += 1;
        prime[i] = counter;
    }
}

int main()
{
    sieve();
    int n;
    while(cin >> n){
        cout << prime[n] << "\n";
    }
}