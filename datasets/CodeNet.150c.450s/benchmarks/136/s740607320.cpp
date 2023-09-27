#include<iostream>
#include<stdio.h>

using namespace std;

int gcd(int a, int b){
    if(a%b==0) return b;
    return gcd(b, a%b);
}

long long lcm(int a, int b){
    return (a/gcd(a, b)*b);
}

int a, b;
int main(){
    while(cin>> a>> b){
        if(a<b) swap(a, b);
        printf("%d %lld\n", gcd(a, b), lcm(a, b));
    }
}