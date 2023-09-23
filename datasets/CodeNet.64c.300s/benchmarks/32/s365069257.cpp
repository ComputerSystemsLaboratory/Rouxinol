#include<iostream>
using namespace std;
#include<stdio.h>

int main(){
    int n; 
    scanf("%d\n", &n);
    int i = 0; 
    int x, min, max;
    long sum;
    min = 1000000;
    max = - 1000000;
    sum = 0; 
    while (i <= n){
        if(i == n){
            printf("%d %d %ld\n", min, max, sum); 
            break;}
        scanf("%d", &x);  
        if(x < min){
            min = x;
            }
        if(max < x){
            max = x;
            }
        sum += x; 
        i += 1;
    }
    return 0;
}