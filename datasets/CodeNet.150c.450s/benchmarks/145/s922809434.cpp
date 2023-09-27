#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std ;

typedef pair<int,string> Pis ;
#define f first
#define s second

vector<Pis> VC ;

int main(){
	
	string str,Astr ;
	getline( cin , str ) ;
	str += ' ' ;
	
	bool f = false ;
	string tmp ;
	tmp.erase();
	for( int i=0 ; i < str.size() ; i++ ){
		if( str[i] != ' ' ) tmp += str[i] ;
		else {
			for( int j=0 ; j<VC.size() ; j++ ){
				if( VC[j].s == tmp ){
					VC[j].f++;
					f = true ;
					break    ;
				}
			}
			if( f ) f = false ;
			else {
				VC.push_back( Pis(1,tmp) ) ;
				if( Astr.size() < tmp.size() ) Astr = tmp ;
			}
			tmp.erase();
		}
	}
	
	sort( VC.begin() , VC.end() );
	
	cout << VC[VC.size()-1].s << " " ;
	cout << Astr << endl ;
	
	return 0;
}