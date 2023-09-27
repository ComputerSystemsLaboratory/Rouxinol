#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    while(1)
    {
        int n;
        int sta[35]={0};
        sta[0]=1;
        cin>>n;
        if(n==0)break;
        for(int i=0;i<n;i++)
        {
            sta[i+1]+=sta[i];
            sta[i+2]+=sta[i];
            sta[i+3]+=sta[i];
        }
        cout<<(((sta[n]+9)/10)+364)/365<<endl;
    }
    return 0;
}