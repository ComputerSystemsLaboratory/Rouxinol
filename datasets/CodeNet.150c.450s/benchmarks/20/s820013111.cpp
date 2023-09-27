#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int s;
    scanf("%d",&s);
    printf("%d:%d:%d\n",s/3600,(s-(s/3600)*3600)/60,s-(s/3600)*3600-((s-(s/3600)*3600)/60)*60);
}