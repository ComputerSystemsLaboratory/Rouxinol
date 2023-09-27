//Leonidas
#pragma GCC optimize("Ofast")
//#pragma GCC target ("avx2")
//#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container'.',hpp>
//#include <ext/pb_ds/tree_policy'.',hpp>
//typedef tree < int , null_type, less <int>, rb_tree_tag, tree_order_statistics_node_update> TREE;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pii pair<int,int>
#define pss pair<short,short>
#define pld pair<long double,long double >
#define ld long double
#define piii  pair<pii,int>
#define vii vector<pair<int,int> >
#define st first
#define nd second
#define pll pair<ll,ll>
#define speed ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define M_PI 3.14159265358979323846
//#define int long long
const int mod=1000000007;
//const int mod=1009;
//const int mod=998244353;
const int inf=1000000009;
const long long INF=1000000000000000009;
const long long big=1000000000000000;
const long double eps=0.000000000000000000001;
using namespace std;
ll T[205];
ll B[61];
bool dodaj(ll x)
{
    for(int i=59;i>=0;i--)
    {
        if(x&(1LL<<i))
        {
            if(!B[i])
            {
                B[i]=x;
                return 1;
            }
            else
                x^=B[i];
        }
    }
    return 0;
}
void czysc()
{
    for(int i=0;i<=59;i++)
        B[i]=0;
}
int32_t main()
{
    speed
    int t;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>T[i];
        string napis;
        cin>>napis;
        bool czy=0;
        for(int i=n-1;i>=0;i--)
        {
            bool x=dodaj(T[i]);
            if(napis[i]=='1'&&x)
                czy=1;
        }
        if(czy)
            cout<<"1\n";
        else
            cout<<"0\n";
        czysc();
    }
    return 0;
}
