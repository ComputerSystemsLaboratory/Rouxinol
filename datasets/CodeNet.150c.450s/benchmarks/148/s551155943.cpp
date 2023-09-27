/*                                  /   \                                                                   (Hello)//JSM//*/      
/*                                 /*****\                                                                              */
/*     Jai Shree Mataji           /       \ |\| |_| $ |-| K                                                            */
#include<vector>
#include<iostream>
#include<algorithm>                
#include<string.h>                 
#include<bits/stdc++.h>            
#include<cstring>                  
#include<map>                     
#include<cmath>                  
#include<set>
using namespace std;            
#define ll long long int        
#define ld long double
#define MOD 1000000007 
#define PI 3.1415926535897932384626433832795                                               
#define YY cout<<"YES"
#define NN cout<<"NO"
#define EE cout<<"\n"
#define ee cout<<"\n"
#define ne cout<<"-1"
#define pb push_back 
#define fi first
#define se second
#define mkp make_pair    
#define mkt make_tuple
#define sall(v ) sort(v.begin(), v.end())      
#define all(v )  v.begin(), v.end()      
#define fo(i , n) for(ll i = 0 ; i < n ; i++)
#define vl vector<ll>
#define vc vector<char> 
#define vll vector< pair<ll,ll> > 
#define mps map<string ,ll>
#define mpc map<char ,ll>
#define mpl map<ll, ll>
#define pr pair<ll,ll>
#define tpl tuple<ll,ll,ll>
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);	
	  ll t=1;
      
//	   cin>>t;
      

	      while(t--)
{
ll n;
/*
6
AC
TLE
AC
AC
WA
TLE*/
cin>>n;
string  s;
map <string ,ll> M;
fo(i,n)
{
	cin>>s;
	M[s]++;
}/*
AC x 3
WA x 1
TLE x 2
RE x 0
*/
cout<<"AC x "<<M["AC"];
ee;
cout<<"WA x "<<M["WA"];
ee;
cout<<"TLE x "<<M["TLE"];
ee;
cout<<"RE x "<<M["RE"];
ee;







}
return 0;
}












