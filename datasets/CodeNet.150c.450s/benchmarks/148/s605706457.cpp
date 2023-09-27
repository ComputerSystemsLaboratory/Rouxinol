#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a=0,b=0,c=0,d=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s=="AC")
        {
            a++;
        }
        else if(s=="WA")
        {
            b++;
        }
        else if(s=="TLE")
        {
            c++;
        }
        else if(s=="RE")
        {
            d++;
        }
    }
    cout<<"AC x "<<a<<endl<<"WA x "<<b<<"\nTLE x "<<c<<"\nRE x "<<d<<endl;
}
