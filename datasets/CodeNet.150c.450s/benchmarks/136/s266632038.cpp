#define _CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
using namespace std;

int gcd(int a, int b){
    return b ? gcd(b, a%b) : a;
}

int main(int argc, char ** argv) {
    int a, b;
    while (~scanf("%d%d", &a, &b)){
        int g = gcd(a, b);
        int l = a / g*b;
        printf("%d %d\n",g,l);
    }
}