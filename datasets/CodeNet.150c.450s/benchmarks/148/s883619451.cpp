#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    int N,ACcount=0,WAcount=0,TLEcount=0,REcount=0;
    cin>>N;
    while(N--)
    {
        cin>>str;

        if(str=="AC")
            ACcount++;
        else if(str=="WA")
            WAcount++;
        else if(str=="TLE")
            TLEcount++;
        else if(str=="RE")
            REcount++;
    }
    cout<<"AC "<<"x "<<ACcount<<endl;
    cout<<"WA "<<"x "<<WAcount<<endl;
    cout<<"TLE "<<"x "<<TLEcount<<endl;
    cout<<"RE "<<"x "<<REcount<<endl;

    return 0;
}
