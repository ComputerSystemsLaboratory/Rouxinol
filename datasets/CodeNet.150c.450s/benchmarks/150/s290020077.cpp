#include<bits/stdc++.h>

using namespace std;

int main()
{

int ns[10001];

for(int i=0;i<10001;i++)
{
    ns[i]=0;
}

int n;
scanf("%d",&n);

int d;
for(int i=0;i<n;i++)
{
    scanf("%d",&d);
    ns[d]++;
}

int frst=1;

for(int i=0;i<10001;i++)
{
    if(ns[i]!=0)
    {
        for(int j=0;j<ns[i];j++)
        {
            if(!frst){printf(" ");}
            else{frst=0;}
            printf("%d",i);
        }
    }
}

printf("\n");

return 0;
}