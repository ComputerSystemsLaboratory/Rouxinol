#include <stdio.h>
void _swap(int& a, int& b)
{
int t = a;
a = b;
b = t;
}

int main()
{
int n[3];
scanf("%d %d %d",&n[0],&n[1],&n[2]);

if(n[2]<n[0]) _swap(n[0],n[2]);
if(n[1]<n[0]) _swap(n[0],n[1]);
if(n[2]<n[1]) _swap(n[1],n[2]);

printf("%d %d %d\n", n[0],n[1],n[2]);

return 0;
}