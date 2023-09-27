#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
        int v=0,s=0,a[10000+1],b[10000+1],i,n;
        while(1)
        {
                v=0;
                s=0;
                cin>>n;//??\???
                if(n==0)//0?????´???
                {
                        break;
                }
                for(i=0;i<n;i++)//??\???
                {
                        cin>>a[i]>>b[i];
                }
                for(i=0;i<n;i++)
                {
                        if(a[i]>b[i])
                                v=a[i]+b[i]+v;
                        else if(a[i]<b[i])
                                s=a[i]+b[i]+s;
                        else
                        {
                                v=a[i]+v;
                                s=b[i]+s;
                        }
                }
                cout<<v<<" "<<s<<endl;
        }
        return 0;
}