#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <string>
using  namespace  std;
int main()
{
    long long int ar[12];
    for(int i=0;i<10;i++)
        cin>>ar[i];
    sort(ar,ar+10);
    cout<<ar[9]<<'\n'<<ar[8]<<'\n'<<ar[7]<<'\n';
    return 0;
}