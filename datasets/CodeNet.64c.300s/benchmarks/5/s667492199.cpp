#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    int n, i, s, g, a[100];
    for(i=0;i < 10;i++)
    scanf("%d", &a[i]);
    sort(a, a+i);
    printf("%d\n%d\n%d\n", a[9], a[8], a[7]);
    return 0;
    }