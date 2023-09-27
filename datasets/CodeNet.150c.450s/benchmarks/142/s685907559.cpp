/*  TAHMID RAHMAN
    DAMIAN FOREVER
     MATH LOVER
    NEVER GIVE UP
*/
#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define pb push_back
#define fi first
#define se second
#define in insert
#define mp make_pair
#define GCD(a,b) __gcd(a,b);
#define endl "\n"
#define FRU freopen("out.txt","w",stdout)
#define FRO freopen("in.txt","r",stdin)
#define INFLL 9223372036854775807
#define debug 0
#define MAXN   100001
#define ar array
const int mxN=2e5;
const int MOD=1e9+7;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
//Don't hesitate to ask me if you don't understand my code.......Happy coding,Tahmid...;
int main()
{
    fastio;
    ll n,k,i,j;
    cin>>n>>k;
    string ye="Yes",no="No";
    vector<ll>v(n);
    for(i=0;i<n;i++)cin>>v[i];
    for(i=0;i<(n-k);i++)
    {
        if(v[i]<v[i+k])
            cout<<ye<<endl;
        else
            cout<<no<<endl;
    }


}

