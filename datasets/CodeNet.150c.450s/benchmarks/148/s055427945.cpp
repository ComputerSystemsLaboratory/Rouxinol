#include <iostream>

using namespace std;

int main()
{
    int n,counta=0,countt=0,countr=0,countw=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s[0]=='A') counta++;
        if(s[0]=='W') countw++;
        if(s[0]=='T') countt++;
        if(s[0]=='R') countr++;
    }
    cout<<"AC x "<<counta<<endl;
    cout<<"WA x "<<countw<<endl;
    cout<<"TLE x "<<countt<<endl;
    cout<<"RE x "<<countr<<endl;
    return 0;
}