#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int a;
	cin >> a;
	int b;
	int x;
	for(int i = 1; i <= a; i++){
		
		if( i % 3  == 0 ){
			cout << " " << i ;
			b = 1;
		}
		
		x = i;
		
		if( x % 10 == 3 && b == 0){
			cout << " " << i;
			b = 1;
		}
		
		while( x % 10 != 3 && b == 0 && x != 0 ) {
			x = x/10;
			if( x % 10 == 3){
				cout << " " << i ;
				x = x / 10;
				b = 1;
			}
		}
		
		
		
	b = 0;
	}
	
	cout << endl;
}
	
	
