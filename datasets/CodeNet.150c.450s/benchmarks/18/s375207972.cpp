#include<iostream>
using namespace std;
int main(void)
{
    int n,m;
    m=100000;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        m=m*21;
        if(m%20000==0)m=m/20;
        else
        {
            m=m/20000;
            m=m*1000+1000;
        }
    }
    cout<<m<<endl;
    return 0;
}
