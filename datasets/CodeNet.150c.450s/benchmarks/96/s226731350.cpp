#include<iostream>
#include<string>
using namespace std ;

char table[9][6] = {
	{'.',',','!','?',' '} , // 5
	{'a','b','c','0','0'} ,
	{'d','e','f','0','0'} ,
	{'g','h','i','0','0'} ,
	{'j','k','l','0','0'} ,
	{'m','n','o','0','0'} ,
	{'p','q','r','s','0'} , // 4
	{'t','u','v','0','0'} ,
	{'w','x','y','z','0'} // 4
} ;

int main(){
	
	int n ;
	string s ;
	cin >> n ;
	for( int i=0 ; i<n ; i++ ){
		cin >> s ;
		for( int j=0 ; j<s.size() ; j++ ){
			int cnt = 0 , p = 3 ;
			char a = s[j] ;
			if( a == '0' ) continue ;
			if( a == '1' ) p = 5 ;
			if( a == '7' || a == '9' ) p = 4 ;
			for( j+=1 ; j<s.size() ; j++ ){
				if( s[j] == a ) cnt++ ;
				if( s[j] == '0' ) break ;
			}
			cout << table[a-'0'-1][cnt%p] ;
		}
		cout << endl ;
	}
	
return 0 ;
}