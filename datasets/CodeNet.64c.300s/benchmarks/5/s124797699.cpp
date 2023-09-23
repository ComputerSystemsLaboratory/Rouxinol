#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int s[11],i;
    for(i=0;i<10;i++){
        scanf("%d",&s[i]);
    }
    sort(s,s+10);
    for(i=9;i>6;i--){
        printf("%d\n",s[i]);
    }
 return 0;
}