#include<iostream>
#include<string>
using namespace std ;

string day[] = { "Thursday" , "Friday" , "Saturday" , "Sunday" , "Monday" , "Tuesday" , "Wednesday" } ;
int month[] = { 31,29,31,30,31,30,31,31,30,31,30,31 } ;
string calendar[13][32] = {} ;

int main(){
	
	int x , y , n=0 ;
	
	for( int i=0 ; i<12 ; i++ ){
		for( int j=0 ; j<=month[i] ; j++ ){
			calendar[i][j] = day[n%7] ;
			n++ ;
		}
		n-- ;
	}
	
	while(1){
		cin >> y >> x ;
		if( y==0 && x==0 ) break ;
		
		cout << calendar[y-1][x-1] << endl ;
	}
	
return 0 ;
}