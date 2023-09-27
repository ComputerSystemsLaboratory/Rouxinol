#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,AC=0,WA=0, TLE=0,RE=0;

    cin>>n;

    string s[n];
    for(i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(i=0; i<n; i++)
    {
        if(s[i]=="AC")
            AC++;
        else if(s[i]=="WA")
            WA++;
        else if(s[i]=="TLE")
            TLE++;
        else if(s[i]=="RE")
            RE++;
    }
    cout<<"AC"<<" x "<<AC<<endl;
    cout<<"WA"<<" x "<<WA<<endl;
    cout<<"TLE"<<" x "<<TLE<<endl;
    cout<<"RE"<<" x "<<RE<<endl;


    return 0;
}
