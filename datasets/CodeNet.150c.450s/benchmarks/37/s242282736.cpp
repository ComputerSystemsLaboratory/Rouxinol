#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    float a,b,c,d,e,f;
    while(-1!=scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f)){
        b/=a;
        c/=a;
        e-=d*b;
        f-=d*c;
        f/=e;
        c-=b*f;

        printf("%.3f %.3f\n", c, f);
    }
    return 0;
}