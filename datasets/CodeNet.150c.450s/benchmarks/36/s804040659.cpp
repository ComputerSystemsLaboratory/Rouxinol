#include<iostream>
#include<cstdio>
using namespace std;

int f(int x){ 
 return x * x;
}

int i,c;

int area(int d) {
    int sum = 0;
    for(i=d; i<=600-d;i += d){
        c = d * f(i);
        sum = sum + c;
        
    }
    return sum;
}

int main(void){
    int d;
    while(scanf("%d", &d) != EOF) {
       printf("%d\n", area(d));
    }
    return 0;
}

