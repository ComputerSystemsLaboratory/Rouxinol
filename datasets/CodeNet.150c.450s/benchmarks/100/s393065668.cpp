#include <cstdio>
using namespace std;

unsigned long factorial(int n) {
     if(n > 1) return n * factorial(n-1);
     else return n;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%lu\n",factorial(n));
    return 0;
}