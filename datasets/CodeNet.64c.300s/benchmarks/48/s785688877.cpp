#include<iostream>
#include<cstdio>
#include<cmath>
#define size 20000000
using namespace std;
int find_prime(int n)
{
    int count =0;
    bool *numberList=new bool[size+1];
    for(unsigned long i=3;i<=sqrt(n);i+=2)
    {
        for(unsigned long j=i;i*j<=n;j+=2)
            numberList[i*j]=true;
    }
    for (unsigned long i=3;i<=n;i+=2)
    {
        if(!numberList[i])
            count++;
    }

    return count;

}
int main ()
{
    int n;
    while((scanf("%d",&n))!=EOF)
    {
        if(n==1||n==0)
            printf("0\n");
        else if(n==2)
            printf("1\n");

        else
        {
        int v=0;
        v=find_prime(n);
        printf("%d\n",v+1);
        }
    }
    return 0;
}