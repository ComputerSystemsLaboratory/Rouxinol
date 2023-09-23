 #include <iostream>
#include <cstdio>
#include <cstring>
 
using namespace std;
 
int main ()
{
    int n;
 
    scanf("%d", &n);
 
    long long fact = 1;
 
    for ( int i = 1; i <= n; i++ )
        fact *= i;
 
    cout << fact << endl;
 
    return 0;
}