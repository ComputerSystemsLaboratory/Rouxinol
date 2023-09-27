#include<iostream>
using namespace std;

int main()
{
    int n;
    int a[11];
    cin>>n;
    while(n--)
    {
        int p=0,q=0;
        int flag=1;
        for(int i=0; i<10; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<10; i++)
        {
            if(a[i]<p&&a[i]<q)
            {
                flag=0;
                break;
            }
            else if(a[i]>p&&a[i]<q)
            {
                p=a[i];
                continue;
            }
            else if(a[i]<p&&a[i]>q)
            {
                q=a[i];
                continue;
            }
            else
            {
                if(p>q)
                    p=a[i];
                if(p<q)
                    q=a[i];
                if(p==q)
                    p=a[i];
            }
        }
        if(flag==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
