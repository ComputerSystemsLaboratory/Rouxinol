#include <iostream>
#include<stdio.h>
using namespace std;
int main(void){
    int n,a,i;
    long long max,min,sum;
    cin>>n;
    max=-1000000;
    min=1000000;
    sum=0;
    for(i=0;i<n;i++){
        cin>>a;
        if (a>max) max=a;
        if (a<min) min=a;
        sum+=a;
    }
    printf ("%lld %lld %lld\n",min,max,sum);
    return 0;
}
