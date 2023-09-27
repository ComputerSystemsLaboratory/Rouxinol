#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
   char sum[1000];
int main()
{

    int a,b,cou,t;
    while(cin>>a>>b)
    {
        sprintf(sum,"%d",a+b);
        printf("%d\n",strlen(sum));


    }

    return 0;
}