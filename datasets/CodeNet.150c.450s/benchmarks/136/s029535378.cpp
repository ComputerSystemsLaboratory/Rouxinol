#include<iostream>
#include <cstdio>
using namespace std;

int gcd( int a, int b)
{
   return b ? gcd(b,a%b):a;
}


int main()
{
    int a,b;
   while(scanf( "%d%d",&a,&b) != EOF)
    {

        cout << gcd( a,b )<< " "<< a/gcd( a,b) * b << endl;

    }
    return 0;
}