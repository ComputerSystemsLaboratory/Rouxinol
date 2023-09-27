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
    string s1="AC",s2="WA",s3="TLE",s4="RE";
    lg a1=0,a2=0,a3=0,a4=0;
    lg n;
    cin>>n;
    for(lg i=0;i<n;i++)
    {
        string j;
        cin>>j;
        if(j==s1) a1++;
        else if(j==s2) a2++;
        else if(j==s3) a3++;
        else if(j==s4) a4++;
    }
    cout<<s1<<" x "<<a1<<endl;
    cout<<s2<<" x "<<a2<<endl;
    cout<<s3<<" x "<<a3<<endl;
    cout<<s4<<" x "<<a4<<endl;
}
