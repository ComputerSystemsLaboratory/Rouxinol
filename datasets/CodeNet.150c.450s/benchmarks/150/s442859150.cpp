#include<bits/stdc++.h>

using namespace std;
int arra[10001];
int main()

{
    int n,temp,j,mini;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        arra[ara[i]]++;
    }
    int frst=1;
    for(int i=0;i<10001;i++)
    {
        if(arra[i]!=0)
        {
            for(j=0;j<arra[i];j++)
            {


            if(!frst)
            {
                printf(" ");
            }
            else
            {
                frst=0;
            }
             printf("%d",i);
        }
    }
    }
    cout<<endl;



}