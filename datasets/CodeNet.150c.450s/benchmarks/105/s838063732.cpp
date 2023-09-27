#include <bits/stdc++.h>
using namespace std ;

#define int long long

vector<int> basisa , basisb;

void inserta(int x){
	for(int i = 0 ; i < 60 ; i++){
		if((x & 1LL << i) == 0) continue ;
		if(basisa[i] == 0){
			basisa[i] = x ;
			return  ;
		}
		x ^= basisa[i] ;
	}
	return  ;
}

void insertb(int x){
	for(int i = 0 ; i < 60 ; i++){
		if((x & 1LL << i) == 0) continue ;
		if(basisb[i] == 0){
			basisb[i] = x ;
			return  ;
		}
		x ^= basisb[i] ;
	}
	return  ;
}

bool ok(int x){
	for(int i = 0 ; i < 60 ; i++){
		if((x & 1LL << i) == 0) continue ;
		if(basisb[i] == 0){
			return false ;
		}
		x ^= basisb[i] ;
	}
	return true ;
}

int32_t main(){
	int t ;
	cin >> t ;
	while(t--){
		basisa.clear() ;
		basisa.resize(60) ;
		basisb.clear() ;
		basisb.resize(60) ;
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
			if(s[i] == '0') insertb(a[i]) ;
			else{
				inserta(a[i]) ;
				for(int j = 0 ; j < 60 ; j++){
					found &= ok(basisa[j]) ;
				}
			}
		}
		cout << 1 - found << '\n' ;
	}
	return 0 ;
}
