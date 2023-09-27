#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,w=0,t=0,r=0;
    for (int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if (s=="AC")
        {
            a=a+1;
        }
        else if (s=="WA")
        {
            w=w+1;
        }
        else if (s=="TLE")
        {
            t=t+1;
        }
        else if (s=="RE")
        {
            r=r+1;
        }
    }
    cout<<"AC x "<<a<<endl;
    cout<<"WA x "<<w<<endl;
    cout<<"TLE x "<<t<<endl;
    cout<<"RE x "<<r<<endl;
    return 0;
}