#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

void solve(){
	
	int n ;
	cin>>n ;

	unordered_map<string,int> mp ;

	for(int i=0;i<n;i++){
		string s ;
		cin>>s ;
		mp[s]++ ; 
	}

	cout<<"AC x "<<mp["AC"]<<"\n" ;
	cout<<"WA x "<<mp["WA"]<<"\n" ;
	cout<<"TLE x "<<mp["TLE"]<<"\n" ;
	cout<<"RE x "<<mp["RE"]<<"\n" ;

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