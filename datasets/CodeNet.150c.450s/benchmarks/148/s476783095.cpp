#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,countt=0,countt1=0,countt2=0;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]=="AC")
            count++;
        else if(s[i]=="WA")
            countt++;
        else if(s[i]=="TLE")
            countt1++;
        else if(s[i]=="RE")
            countt2++;
    }
    cout<<"AC "<<"x "<<count<<endl;
    cout<<"WA "<<"x "<<countt<<endl;
    cout<<"TLE "<<"x "<<countt1<<endl;
    cout<<"RE "<<"x "<<countt2<<endl;
}

