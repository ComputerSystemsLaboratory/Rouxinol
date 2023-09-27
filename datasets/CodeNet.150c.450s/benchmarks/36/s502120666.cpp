#include <iostream>

using namespace std;

int main()
{
    double d;
    while(cin>>d)
    {
        double n,s=0;
        n=600/d;
        for(int i=0;i<n;++i)s+=(d*i)*(d*i)*d;
        cout<<int(s)<<endl;
    }
}