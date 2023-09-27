#include <bits/stdc++.h>
using namespace std;

int main()

{
    int a, b, t;
    while(scanf("%d %d", &a, &b)!=EOF){
        a+=b;
        t=0;
        while(a!=0){
           a=a/10;
           t++;
        }
        printf("%d\n", t);

    }
    return 0;
}