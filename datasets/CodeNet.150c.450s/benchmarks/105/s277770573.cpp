#include <bits/stdc++.h>
using namespace std ;

#define int long long

vector<int> basis;

bool ok(int x){
	for(int i = 0 ; i < 60 ; i++){
		if((x & 1LL << i) == 0) continue ;
		if(basis[i] == 0){
			return  false;
		}
		x ^= basis[i] ;
	}
	return  true;
}

void insert(int x){
	for(int i = 0 ; i < 60 ; i++){
		if((x & 1LL << i) == 0) continue ;
		if(basis[i] == 0){
			basis[i] = x ;
			return  ;
		}
		x ^= basis[i] ;
	}
	return  ;
}

int32_t main(){
	int t ;
	cin >> t ;
	while(t--){
		basis.clear() ;
		basis.resize(60) ;
		int n ; 
		cin >> n ;
		int a[n] ;
		for(int i = 0 ; i < n ; i++){
			cin >> a[i] ;
		}
		string s ; 
		cin >> s ;
		bool found = true ;
		for(int i = n - 1 ; i >= 0 ; i--){
			if(s[i] == '0') insert(a[i]) ;
			else{
				found &= ok(a[i]) ;
			}
		}
		cout << 1 - found << '\n' ;
	}
	return 0 ;
}

