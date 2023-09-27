#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	char ch;
	int i , x , y , total[26]={0};
	while( cin >> ch ){
		if( isupper(ch) )
			ch = tolower(ch);
		x = ch - 'a';
		total[x] ++;
	}
	for( i=97 ; i<=122 ; i++ ){
		printf("%c : %d\n" , i , total[i-97] );
	}
}