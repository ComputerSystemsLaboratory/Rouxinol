#include<bits/stdc++.h>
using namespace std;
#define int  long long int
#define fi first
#define se second
#define pb push_back
#define soo(v) sort(v.rbegin(),v.rend())
#define so(v) sort(v.begin(),v.end())
#define lb(v,x) lower_bound(v.begin(),v.end(),x)
#define ub(v,x) upper_bound(v.begin(),v.end(),x)
#define endl '\n'
#define dbv(v) cout<<endl;cout<<#v<<"-->> ";for(auto it:v){cout<<it<<" ";}cout<<endl;
#define dbm(m)cout<<endl;cout<<#m<<"-->> ";for(auto it:m){cout<<it.fi<<" "<<it.se.fi<<" "<<it.se.se<<endl;}
#define dbs(s)cout<<endl;cout<<#s<<"-->> ";for(auto it:s){cout<<it<<" ";}cout<<endl;
#define mod 1000000007
#define db1(x) cout<<#x<<"="<<x<<endl;
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<endl;
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<endl;
//#define mx 1e18
#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define double long double

#define io std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define re(s) reverse(s.begin(),s.end())
int powe(int x,int n)
{
  if(n==0)return 1;
  if(n%2==0)
    return powe((x%mod*x%mod)%mod,n/2)%mod;
  return (x%mod*powe((x%mod*x%mod)%mod,(n-1)/2))%mod;
}
int gcd(int A,int B)
{
  if(B==0)return A;
  return gcd(B,A%B);
}
int32_t main()
{
io

int n;cin>>n;
string s[n];map<string,int>mm;
mm["AC"]=mm["WA"]=mm["TLE"]=mm["RE"]=0;
for(int i=0;i<n;i++)
{
  cin>>s[i];
  mm[s[i]]++;
}
cout<<"AC x "<<mm["AC"]<<endl;
cout<<"WA x "<<mm["WA"]<<endl;
cout<<"TLE x "<<mm["TLE"]<<endl;
cout<<"RE x "<<mm["RE"]<<endl;

}
