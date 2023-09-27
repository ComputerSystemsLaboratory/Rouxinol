#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std ;

int N,L;
int m[6] ;
int x[] = {1,10,100,1000,10000,100000} ;
int table[21] ;

void calc(){
	for( int j=0 ; j<21 ; j++ ){
		table[j] = N ;
		for( int i=0 ; i<L ; i++ ){
			m[i] = N%10 ;
			N /= 10 ;
		}
		sort(m,m+L);
		int a=0 , b=0 ;
		for( int i=0 ; i<L ; i++ ){
			a += m[i] * x[i] ;
			b += m[L-i-1] * x[i] ;
		}
		N = a-b ;
	}
}

int main(){
	
	while( cin >> N >> L , L ){
		calc() ;
		for( int i=1 ; i<21 ; i++ ){
			for( int j=0 ; j<i ; j++ ){
				if( table[i] == table[j] ){
					printf("%d %d %d\n" ,j ,table[i] ,i-j ) ;
					i = 100 ;
					break ;
				}
			}
		}
	}
	
return 0;
}