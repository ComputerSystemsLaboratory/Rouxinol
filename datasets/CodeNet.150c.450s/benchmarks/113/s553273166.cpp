#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int counter=1,x;
    while(scanf("%d",&x)==1)
    {
        if(x==0)
            break;
        else
        cout<<"Case "<<counter<<": "<<x<<endl;
        counter++;
    }
    return 0;
}
