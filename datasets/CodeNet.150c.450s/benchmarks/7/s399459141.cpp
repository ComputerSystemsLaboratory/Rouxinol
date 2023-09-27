#include <stdio.h>
#include <iostream>
#include <algorithm>
#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int ar[11];
    for(int i = 0; i<=9; i++)
    {
        sf("%d", &ar[i]);
    }

    sort (ar, ar+10);
    for(int i = 9; i>=7; i--)
    {
        pf("%d\n", ar[i]);
    }

    return 0;
}