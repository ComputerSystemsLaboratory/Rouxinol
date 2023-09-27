#pragma GCC optimize "trapv"
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define ld long double
#define mp make_pair
#define pii pair<int,int>
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)
#define repp(i,a,n) for(int i=a;i<n;i++)
#define all(v) v.begin(),v.end()
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>//s.order_of_key(val) *s.find_by_order(ind)
int main()
{
    fio;
    int t=1;
    //cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        unordered_map<ll,ll> m;
        ll sum=0;
        rep(i,n)
        {
        cin>>a[i];
        m[a[i]]++;
        sum+=a[i];
        }
        ll q;
        cin>>q;
        while(q--)
        {
            ll b,c;
            cin>>b>>c;
            cout<<sum+(m[b]*(c-b))<<endl;
            sum=sum+(m[b]*(c-b));
            m[c]+=m[b];
            m[b]=0;
        }
    }
}