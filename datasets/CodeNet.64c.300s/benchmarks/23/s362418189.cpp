#include<cstdio>
#include<iostream>

using namespace std;

int main(){
    int a,b,s,l;
    cin >> a >> b;
    s = a * b;
    l = 2 * (a + b);
    printf("%d %d\n",s,l);
    return 0;
}