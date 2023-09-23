#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(void){
    int i,n;
    double ans;
    cin >> n;
    ans=100.000;
    for(i=0;i<n;i++){
        ans*=1.05;
        ans=(int)(ans+0.999);
        ans=(double)ans;
    }
    ans*=1000;
    printf("%d\n",(int)ans);
    return 0;
}