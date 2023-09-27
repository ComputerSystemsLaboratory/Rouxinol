#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
int main()
{
    ///"In the name of Allah,most gracious and most merciful"///
    ll t,ac=0,wa=0,tle=0,re=0;
    cin>>t;
    string a="AC",a1="WA",a2="TLE",a3="RE";
    while(t--)
    {
        string s;
        cin>>s;
        if(s==a)
            ac++;
        else if(s==a1)
            wa++;
        else if(s==a2)
            tle++;
        else if(s==a3)
            re++;

    }
    cout<<"AC"<<" x "<<ac<<endl;
    cout<<"WA"<<" x "<<wa<<endl;
    cout<<"TLE"<<" x "<<tle<<endl;
    cout<<"RE"<<" x "<<re<<endl;

    return 0;
}


