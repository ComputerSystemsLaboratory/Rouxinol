#include<cstdio>
#include<iostream>

using namespace std;

int main(){
    int S,M,s,m,h;
    cin >> S;
    s = S % 60;
    M = S / 60;
    m = M % 60;
    h = M / 60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}