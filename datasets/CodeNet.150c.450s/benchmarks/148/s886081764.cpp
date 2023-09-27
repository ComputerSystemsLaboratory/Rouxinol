#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
const int N=1e6;
ll v[N+10];
int main()

{

    ll t;
    cin>>t;
    ll a=0,b=0,c=0,d=0;
    while(t--)
    {

        string str;

        cin>>str;

        if(str=="AC")
            a++;

        else if(str=="WA")
            b++;

        else if(str=="TLE")
            c++;

        else
            d++;
    }

    cout<<"AC"<<" x "<<a<<endl;

    cout<<"WA"<<" x "<<b<<endl;

    cout<<"TLE"<<" x "<<c<<endl;

    cout<<"RE"<<" x "<<d<<endl;
}
