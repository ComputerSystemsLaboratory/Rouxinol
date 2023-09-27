#include<iostream>
using namespace std;
int main()
{
    int ara[5],i,j,temp;
    for(i=0; i<5; i++)
    {
        cin>>ara[i];
    }
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(ara[i]<ara[j])
            {
                temp=ara[j];
                ara[j]=ara[i];
                ara[i]=temp;
            }
        }
    }
    for(i=0; i<5; i++)
    {
        cout<<ara[i];
        if(i<4)
        {
            cout<<" ";
        }
    }
    cout<<endl;
}