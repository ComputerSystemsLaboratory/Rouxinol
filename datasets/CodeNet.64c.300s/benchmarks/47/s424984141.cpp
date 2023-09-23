#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int da[150]={0},a,i=0,max=0;
    while(cin>>a)
    {
        da[a]++;
        if(max<=da[a])max=da[a];
    }
    for(int j=0;j<150;j++)
    {
        if(da[j]==max)cout<<j<<endl;
    }
    return 0;
}