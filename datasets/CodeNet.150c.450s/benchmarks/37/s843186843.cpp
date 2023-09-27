#include<iostream>
#include<stdio.h>
using namespace std ;

int main(){
	
	double a,b,c,d,e,f ;
	double x,y ;
	
	while(1){
		cin >> a ;
		if( cin.eof() ) break ;
		cin >> b >> c ;
		cin >> d >> e >> f ;
		
		if( a*e - b*d == 0 ){
			cout << "error" << endl ;
		}
		else{
			x = ( c*e - b*f ) / ( a*e - b*d ) + 0.00005 ;
			y = ( a*f - d*c ) / ( a*e - b*d ) + 0.00005 ;
		}
		
		printf("%.3lf %.3lf\n",x ,y) ;
	}
	
return 0 ;
}

/*
ax + by = c
dx + ey = f
*/