#include <iostream>
using namespace std;
int main()
{
    int s[10000];
    int n,q,i,j,c=0,t;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>s[i];
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>t;
        for(j=0;j<n;j++)
        {
            if(s[j]==t)
                break;
        }
        if(j<n)
            c++;
    }
    cout<<c<<endl;
    return 0;
}