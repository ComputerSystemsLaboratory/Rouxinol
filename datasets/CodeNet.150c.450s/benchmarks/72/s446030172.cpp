#include<iostream>
#include<cstdio>
using namespace std;

char Cb( char a ){
	return a - 32;
}
char Cs( char a ){
	return a + 32;
} 

int main(){
	char a[1200];
	fgets(a, 1200, stdin);
	
	for(int i = 0; a[i] != '\0'; i++){
		if( a[i] >= 'a' && a[i] <= 'z' )
			cout << Cb(a[i]) ;
		else if( a[i] >= 'A' && a[i] <= 'Z' )
			cout << Cs(a[i]) ;
		else 
			cout << a[i] ;
	}	
	return 0;
}