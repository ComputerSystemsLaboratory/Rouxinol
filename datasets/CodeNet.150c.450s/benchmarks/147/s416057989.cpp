/*

Name: Krishan Kant Agnihotri
FROM: University school of information and technology

*/
#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define FOR(i,n) for(int i = 0;i<n ;i++)
#define ii pair<int,int>
#define vii vector<ii>
#define vi vector<int>
#define mii map<int,int>
#define uii unordered_map<int,int>
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

#define pb push_back
#define MOD 1e9+7
#define INF 0x3f3f3f3f
#define print(x) cout<<x<<"\n";
using namespace std;
;
//use it with unordered_map<T,T,custom_hash> safe_map
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main()
{
    int n;
    cin>>n;
    ll i,j,k;
   vector<int> v(10060);
   for(int i = 1 ;i<=105;i++){
       for(j = 1 ;j<=105;j++){
           for(k = 1 ;k<=105;k++){
               ll tmp = i*i+j*j+k*k+i*j+i*k+j*k;
               if(tmp<10060)
               v[tmp]++;
           }
       }
   }
   for( i  =0 ;i<n ;i++){
       cout<<v[i+1]<<endl;
   }
    
}

