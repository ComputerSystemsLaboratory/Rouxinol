/*!enjoy karo yaar!*/

//CF,CC,AtC,SPOJ: hp1999
//HE: hemant269
//HR: hemant2132

#include<bits/stdc++.h>
using namespace std;

/*-----<Defines>-----*/
#define     int             long long int
#define     fast()          ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define     all(x)          begin(x),end(x)
#define     rz(x)           resize(x)
#define     asn(x,y)        assign(x,y)
#define     mem(a,b)        memset(a,b,sizeof(a))
#define     sz(x)           ((int)size(x))
#define     eb              emplace_back
#define     pb              push_back
#define     pf              push_front
#define     pob             pop_back
#define     pof             pop_front
#define     ins             insert
#define     vi              vector<int>
#define     pii             pair<int,int>
#define     mii             map<int,int>
#define     F               first
#define     S               second
#define     remax(a,b)      a=max(a,b)
#define     remin(a,b)      a=min(a,b)
#define     bitcount(x)     __builtin_popcountll(x)
#define     iceil(n,x)      (((n)-1)/(x)+1)
#define     flush           fflush(stdout)

using ull=unsigned long long;
using ll=long long;
using ld=long double;
/*-----</Defines>-----*/

/*-----<Debugging Stuff>-----*/
string to_string(char s)
{   string res="'''";res[1]=s;return res; }

string to_string(string s)
{   return '"'+s+'"'; }

string to_string(const char* s)
{   return to_string((string)s); }

string to_string(bool b)
{   return (b?"true":"false"); }

template<typename A, typename B>
string to_string(pair<A, B> p)
{   return "("+to_string(p.F)+", "+to_string(p.S)+")"; }

template<typename A>
string to_string(A v)
{
    bool first=1; string res="{";
    for(const auto &x:v)
    {
        if(!first)  res+=", ";
        first=0;
        res+=to_string(x);
    }
    res+="}";
    return res;
}

void debug() { cout<<"\n"; }
template<typename Head, typename... Tail>
void debug(Head H, Tail... T)
{
    cout<<" "<<to_string(H);
    debug(T...);
}

#define show(...) cout << "[" << #__VA_ARGS__ << "]:", debug(__VA_ARGS__)
/*-----</Debugging Stuff>-----*/

/*-----<Mod Operations>-----*/
const int M=1e9+7;
inline int add(int a,int b,int p=M){ a=a+b; if(a>=p) a-=p; return a; }
inline int sub(int a,int b,int p=M){ a=a-b; if(a<0) a+=p; return a; }
inline int mul(int a,int b,int p=M){ a=(a*1ll*b)%p; return a; }
/*-----</Mod Operations>-----*/

/*-----<Constants>-----*/
const ld pi=acos(-1),eps=1e-9;
const ll inf=1e18;
const int N=1;
/*-----</Constants>-----*/

void solve()
{
    int n,k;
    cin>>n>>k;

    vi v(n);
    for(auto& c:v)
        cin>>c;

    for(int i=k;i<n;++i)
    {
        if(v[i]>v[i-k])
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}

int32_t main()
{
    fast();

    int t=1;
    //cin>>t;
    for(int z=1;z<=t;++z)
    {
        solve();
        //cout<<"\n";
    }

    return 0;
}


