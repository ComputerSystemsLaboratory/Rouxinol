#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,line,k,l,input1,input2,input3;
    scanf("%d",&line);
    for(l=1;l<=line;l++)
    {
        scanf("%d %d %d",&input1,&input2,&input3);
        if((input1*input1+input2*input2)==(input3*input3) || (input3*input3+input2*input2)==(input1*input1) || (input1*input1+input3*input3)==(input2*input2))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}