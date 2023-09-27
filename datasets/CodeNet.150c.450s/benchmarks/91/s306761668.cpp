#define _CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
using namespace std;

int const N = 1000010;
int ans[N];

bool isprime(int x){
    for (int i = 2; i*i <= x; i++){
        if (x%i == 0) return false;
    }
    return true;
}

int main(int argc, char ** argv) {
    ans[0] = ans[1] = 0;
    for (int i = 2; i < N; ++i) {
        if (isprime(i)) ans[i] = ans[i - 1] + 1;
        else ans[i] = ans[i - 1];
    }
    int n;
    while (~scanf("%d\n", &n)){
        printf("%d\n",ans[n]);
    }
}