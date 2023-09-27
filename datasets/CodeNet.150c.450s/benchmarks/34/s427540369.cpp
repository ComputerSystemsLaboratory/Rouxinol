#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int dan[45]={0},nen[45]={0};
    int n;
    dan[1]=1;
    nen[1]=1;
    dan[2]=2;
    dan[3]=4;
    for(int i=4;i<=35;i++)
    {
        dan[i]=dan[i-1]+dan[i-2]+dan[i-3];
    }
    while(cin>>n)
    {
        nen[n]=dan[n]/3650;
        if(dan[n] % 3650 != 0)
        {
            nen[n]++;
        }
        if(n==0)break;
        cout<<nen[n]<<endl;
    }
    return 0;
}