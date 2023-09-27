#include<iostream>
#include<cstdlib>
#include<stdio.h>
using namespace std;

int main()
{
 long long int a[25]={1};
 a[0]=0;
 a[1]=1;
 for (int i=2;i<25;i++)
 {
     a[i]=a[i-1]*i;
 }

 int n;

 while (cin >> n)
 {
 cout << a[n] << "\n";
 }

 return 0;
}