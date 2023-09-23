#include <iostream>
using namespace std;
int main(void)
{
    int b,i,j,k;
    int a[30];
    for(i=0;i<30;i++)
    {
        a[i]=0;
    }
    for(j=0;j<28;j++)
    {
        cin>>b;
        a[b-1]=1;
    }
    for(k=0;k<30;k++)
    {
        if(a[k]==0)
        {
            cout<<k+1<<endl;
        }
    }
    return 0;
}
