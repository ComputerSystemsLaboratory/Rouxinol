#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main(){
    int num,n;
    while(~scanf("%d",&n))
    {
        num=0;
        for(int i=0;i<=9;i++)
        {
            for(int j=0;j<=9&&i+j<=n;j++)
            {
                for(int k=0;k<=9&&i+j+k<=n;k++)
                {
                    for(int m=0;m<=9;m++)
                    {
                        if(i+j+k+m==n)
                        {
                            num++;
                            break;
                        }
                    }
                }
            }
        }
        cout<<num<<endl;
    }
    return 0;
}
