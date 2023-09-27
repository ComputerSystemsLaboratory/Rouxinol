#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[20][50]={{0}};
    int i=4;
    int x,y;
    for(int k=1;k<=31;k++)
    {
        a[1][k]=i;
        i++;
        if(i==8)i=1;
    }
    for(int k=1;k<=29;k++)
    {
        a[2][k]=i;
        i++;
        if(i==8)i=1;
    }
    for(int k=1;k<=31;k++)
    {
        a[3][k]=i;
        i++;
        if(i==8)i=1;
    }
    for(int k=1;k<=30;k++)
    {
        a[4][k]=i;
        i++;
        if(i==8)i=1;
    }
    for(int k=1;k<=31;k++)
    {
        a[5][k]=i;
        i++;
        if(i==8)i=1;
    }
    for(int k=1;k<=30;k++)
    {
        a[6][k]=i;
        i++;
        if(i==8)i=1;
    }
    for(int k=1;k<=31;k++)
    {
        a[7][k]=i;
        i++;
        if(i==8)i=1;
    }
    for(int k=1;k<=31;k++)
    {
        a[8][k]=i;
        i++;
        if(i==8)i=1;
    }
    for(int k=1;k<=30;k++)
    {
        a[9][k]=i;
        i++;
        if(i==8)i=1;
    }
    for(int g=1;g<=31;g++)
    {
        a[10][g]=i;
        i++;
        if(i==8)i=1;
    }
    for(int k=1;k<=30;k++)
    {
        a[11][k]=i;
        i++;
        if(i==8)i=1;
    }
    for(int k=1;k<=31;k++)
    {
        a[12][k]=i;
        i++;
        if(i==8)i=1;
    }
    //for(int bb=1;bb<=12;bb++)
    //{
    //    for(int aa=1;aa<32;aa++)
    //   {
    //        printf("a[%d][%d]=%d\n",bb,aa,a[bb][aa]);
    //    }
    //}
    while(cin>>x>>y)
    {
        if(x==0)break;
        if(a[x][y]==1)cout<<"Monday"<<endl;
        if(a[x][y]==2)cout<<"Tuesday"<<endl;
        if(a[x][y]==3)cout<<"Wednesday"<<endl;
        if(a[x][y]==4)cout<<"Thursday"<<endl;
        if(a[x][y]==5)cout<<"Friday"<<endl;
        if(a[x][y]==6)cout<<"Saturday"<<endl;
        if(a[x][y]==7)cout<<"Sunday"<<endl;
    }
    return 0;
}