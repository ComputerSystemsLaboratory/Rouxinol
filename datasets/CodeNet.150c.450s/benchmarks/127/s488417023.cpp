#include<iostream>
#include<string>
#include<map>
using namespace std ;

string s ;

string f( int a , int b ){
	string z(1,s[a]) ;
	for( int i=a+1 ; i<=b ; i++ ){
		z += s[i] ;
	}
	return z ;
}
string f_r( string a ){
	string z(1,a[a.size()-1]) ;
	for( int i=a.size()-2 ; i>=0 ; i-- ){
		z += a[i] ;
	}
	return z ;
}

int main(){
	
	int n ;
	
	cin >> n ;
	for( int i=0 ; i<n ; i++ ){
		cin >> s ;
		
		int cnt = 1 ;
		map<string,int> train ;
		train[s] = 1 ;
		
		for( int j=1 ; j<s.size() ; j++ ){
			string x = f(0,j-1) ;
			string y = f(j,s.size()-1) ;
			string x_r = f_r(x) ;
			string y_r = f_r(y) ;
			string p ;
			
			
			//----------------------
			p = x + y_r ;
			if( train[p] != 1 ){
				cnt++ ; train[p] = 1 ;
			}
			p = x_r + y ;
			if( train[p] != 1 ){
				cnt++ ; train[p] = 1 ;
			}
			p = x_r + y_r ;
			if( train[p] != 1 ){
				cnt++ ; train[p] = 1 ;
			}
			//-----------------------
			p = y + x ;
			if( train[p] != 1 ){
				cnt++ ; train[p] = 1 ;
			}
			p = y + x_r ;
			if( train[p] != 1 ){
				cnt++ ; train[p] = 1 ;
			}
			p = y_r + x ;
			if( train[p] != 1 ){
				cnt++ ; train[p] = 1 ;
			}
			p = y_r + x_r ;
			if( train[p] != 1 ){
				cnt++ ; train[p] = 1 ;
			}
		}
		
		cout << cnt << endl ;
	}
	
return 0 ;
}