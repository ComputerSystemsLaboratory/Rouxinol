#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{	
	int a,b;
	scanf("%d %d", &a, &b);
	int res1 = a*b;
	int res2 = (a*2) + (b*2);
    printf("%d %d\n", res1, res2);
    return 0;
}