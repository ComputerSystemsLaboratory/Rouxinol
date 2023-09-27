//Radhe Radhe
#include<bits/stdc++.h>
#define godspeed  ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define mod 1000000007 //1e9+7
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define rep(i,n)    for(ll i=0; i<n; i++)
#define rep1(i,a,b)    for(ll i=a; i<b; i++)
#define repV(i,n)    for(ll i=0; i<v.size(); i++)
#define fixed cout.setf(ios::fixed);
#define Precise cout.precision(7);
#define yes cout<<"Yes"<<'\n';
#define no cout<<"No"<<'\n';
using namespace std;

int main()
{
    godspeed
    ll  i,j,n,k,x;
    cin>>n;
    vector<ll> v(n+1,0);
    rep1(i,1,105)
    rep1(j,1,105)
    rep1(k,1,105)
    {
        ll nn=i*i+j*j+k*k+i*j+j*k+k*i;
        if(nn<=n)
            v[nn]++;
    }
    rep1(i,1,n+1)
    {

        cout<<v[i]<<endl;
    }
    return 0;
}
