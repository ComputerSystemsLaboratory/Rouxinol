#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<sstream>
using namespace std;
void p(int x)
{
    int i,j;
    for(i=2;i<=1000000;i++)
    {
    if(x==1) { printf("\n"); return; }

    while(x%i==0)
      {
        printf(" %d",i);
        x=x/i;
      }
    }
    printf(" %d\n",x);
}

int main()
{
    int x;cin>>x;
    printf("%d:",x);
    p(x);

return 0;
}