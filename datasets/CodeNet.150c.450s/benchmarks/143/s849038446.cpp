#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

void solve(){
	
	int n ;
	cin>>n; 

	ll arr[n] ;

	unordered_map<ll,int> mp ;

	for(int i=0;i<n;i++){
		cin>>arr[i] ;
		mp[arr[i]]++ ;
	}

	ll sum=0 ;

	for(int i=0;i<n;i++){
		sum+=arr[i] ;
	}

	int q ;
	cin>>q ;

	for(int i=0;i<q;i++){
	
		ll l,r ;
		cin>>l>>r ;

		ll temp=mp[l] ;
		mp[l]=0 ;
		mp[r]+=temp ;

		sum=sum-(l*temp)+(r*temp) ;
		cout<<sum<<"\n" ;
	
	}

}	

int main(){
	
	int y ;

	y=1 ;
	//cin>>y ;

	while(y--)
	{	
		solve() ;
	}

}