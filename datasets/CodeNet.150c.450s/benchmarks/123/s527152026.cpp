#include<bits/stdc++.h>

using namespace std;




int main()
{
    int n,i,a,d=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        int flag=0;
        if (a%2==0) {if (a==2) d++;}
        else
        {
            for(int j=3;j<=sqrt(a);j+=2)
            {
                if (a%j==0) {flag=1; break;}
            }
            if (flag==0) d++;
        }

    }
    cout<<d<<endl;


}