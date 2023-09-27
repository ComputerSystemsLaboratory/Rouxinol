#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define fr(i,a,b) for(int i=a;i<b;i++)
#define frr(i,a,b) for(int i=b-1;i>=a;i--)
#define mod 1000000007
#define pb push_back
#define son ll t; cin>>t;while(t--)
#define fst ios_base::sync_with_stdio(false); cin.tie(NULL);
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define mpr make_pair
#define ff first
#define ss second
#define inf 5e18
#define dex(x,y) fixed<<setprecision(x)<<y
void start()
{
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
}

int32_t main()
{
    fst
//    start();
    int n;
  cin>>n;
  int a[10001]={0};
  fr(i,1,101)
  {
    {fr(j,1,101)
    {fr(k,1,101)
    {int x=i*i+j*j+k*k+i*j+i*k+j*k;
     if(x<=10000)
       a[x]++;}}}}
  fr(i,1,n+1)
    cout<<a[i]<<endl;
      
    
}
