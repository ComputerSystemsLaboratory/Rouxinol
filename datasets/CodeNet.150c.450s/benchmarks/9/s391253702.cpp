#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main(){
	int i , j , n , h ;
	string str , st , s;
	while(1){
		cin >> str ;
		if( str == "-" )break;
		cin >> n ;
		for( j=0 ; j<n ; j++ ){
			cin >> h ;
			st ="";
			s="";
			for( i=0 ; i<h ; i++ )
				st += str[i];
			int x = str.size();
			for( i=h ; i<x; i++ )
				s += str[i];
			str = s+st;
		}
		cout << str << endl;
	}	
}