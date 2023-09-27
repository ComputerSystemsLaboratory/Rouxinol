#include<iostream>
using namespace std;
#include<stdio.h>

int main(){
    
    long long n,a,min=1000000,max=-1000000,sum=0;
    cin >>n;
    
    for (int i=0;i<n;i++){
        cin >> a;
        sum = sum + a;
        if (a<min) min = a;
        if (a>max) max = a;
    }
    printf("%ld %ld %ld\n", min, max, sum);
    return 0;
}


