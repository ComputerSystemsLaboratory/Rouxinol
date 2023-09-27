#include<bits/stdc++.h>
#define lg long long int
#define loop(i,s,e) for(lg i=s;i<=e;i++)
#define iloop(i,s,e) for(lg i=e;i>=s;i--)
#define pb push_back
#define mp make_pair
using namespace std;

lg min(lg a,lg b)
{return a<b?a:b;}
lg max(lg a,lg b)
{return a>b?a:b;}
lg lcm(lg a ,lg b)
{
    return (a*b)/__gcd(a,b);
}
int main()
{
    lg n;
    cin>>n;
    string a1 = "AC", a2 = "WA", a3 = "TLE", a4 = "RE";
    lg b1=0,b2=0,b3=0,b4=0;

    for(lg i=0;i<n;i++)
    {
        string h;
        cin>>h;
        if(h==a1) b1++;
        else if(h==a2) b2++;
        else if(h==a3) b3++;
        else if(h==a4) b4++;
    }

    cout<<a1<<" x "<<b1<<endl;
    cout<<a2<<" x "<<b2<<endl;
    cout<<a3<<" x "<<b3<<endl;
    cout<<a4<<" x "<<b4<<endl;
}
