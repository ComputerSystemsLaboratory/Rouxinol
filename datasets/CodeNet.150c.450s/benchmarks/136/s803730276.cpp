#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <utility>
using namespace std;
int gcd (int a , int b){
    if(a<b)
        swap(a,b);
    return b==0 ? a:gcd(b,a%b);
}
int lcm (int a , int b){
    return a/gcd(a,b)*b;
}
int main (){
    int a = 0;
    int b = 0;
    while (scanf("%d%d",&a,&b)!=EOF&&(a>0&&b>0&&a<=2000000000&&b<=2000000000)&&lcm(a,b)<=2000000000)
        cout<<gcd(a,b)<<' '<<lcm(a,b)<<endl;
    return 0;
}

