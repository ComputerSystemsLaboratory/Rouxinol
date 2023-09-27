#include <cstdio>
#include <iostream>
#define pf printf
using namespace std;

int st[30], a, b;

int main()
{
    for(int i=0, i1; i < 28; ++i) {
        cin >> i1;
        ++st[i1-1];
    }
    for(int i=0; i < 30; ++i) if (!st[i]) (!a) ? a = i+1 : b = i+1;
    (a < b) ? pf("%d\n%d\n",a,b) : pf("%d\n%d\n",b,a);
    return 0;
}