#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c,f,t;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>a>>b>>c;
        if(a>b && a>c)
        {
            if((b*b)+(c*c)==(a*a))
                f=1;
        }
        else if(b>a && b>c)
        {
            if((a*a)+(c*c)==(b*b))
                f=1;
        }
        else if(c>b && c>a)
        {
            if((b*b)+(a*a)==(c*c))
                f=1;
        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}