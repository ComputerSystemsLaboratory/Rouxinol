#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    int n,a=0,b=0,c=0,d=0;
    cin>>n;
    while(n--)
    {
        cin>>str;
        if(str=="AC")
            a++;
        else if(str=="WA")
            b++;
        else if(str=="TLE")
            c++;
        else if(str=="RE")
            d++;
    }
    cout<<"AC "<<"x "<<a<<endl;
    cout<<"WA "<<"x "<<b<<endl;
    cout<<"TLE "<<"x "<<c<<endl;
    cout<<"RE "<<"x "<<d<<endl;

    return 0;
}
