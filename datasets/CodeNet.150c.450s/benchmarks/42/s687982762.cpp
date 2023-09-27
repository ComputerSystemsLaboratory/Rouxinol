#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int first,last;
char s[12];

struct mission
{
    char S[11];
    int time;
}A[100015];

struct
{
    void enqueue(mission x,int n)
    {

        A[last]=x;
        ++last;
        if(last==n+1)
            last=0;
    }

    mission dequeue(int n)
    {
       mission x=A[first];
       ++first;
       if(first==n+1)
        first=0;
       return x;
    }

}Myqueue;

int main()
{
    mission nt;
    int n,m,k,usedtime=0,ntime;
    first=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%s%d",A[i].S,&A[i].time);
    }
    last=n;

    while(first!=last)
    {
        nt=Myqueue.dequeue(n);
        if(nt.time>m)
        {
           usedtime+=m;
           nt.time=nt.time-m;
           Myqueue.enqueue(nt,n);
        }
        else if(nt.time<=m && nt.time>0)
         {
             usedtime+=nt.time;
             nt.time=0;
            printf("%s %d\n",nt.S,usedtime);
        }
    }
    return 0;
}