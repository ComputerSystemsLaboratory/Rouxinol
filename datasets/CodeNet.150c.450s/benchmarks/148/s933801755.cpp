#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pll pair<ll,ll> 

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	ll n;
	cin>>n;
	map<string, ll> M;
	string s;
	for(ll i=0;i<n;i++){
		cin>>s;
		M[s]++;
	}
	cout<<"AC x "<<M["AC"]<<endl;
	cout<<"WA x "<<M["WA"]<<endl;
	cout<<"TLE x "<<M["TLE"]<<endl;
	cout<<"RE x "<<M["RE"]<<endl;
}
