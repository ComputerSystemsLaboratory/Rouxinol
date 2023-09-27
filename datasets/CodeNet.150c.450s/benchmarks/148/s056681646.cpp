#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int x=0, y=0, z=0, c=0, t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        if(a=="AC")
        {
            x++;
        }
        else if(a=="WA")
        {
            y++;
        }
        else if(a=="TLE")
        {
            z++;
        }
        else if(a=="RE")
        {
            c++;
        }
    }
    cout<<"AC x "<<x<<endl;
    cout<<"WA x "<<y<<endl;
    cout<<"TLE x "<<z<<endl;
    cout<<"RE x "<<c<<endl;
}
