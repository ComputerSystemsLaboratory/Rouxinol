#include <iostream>
using namespace std;
int main(){
	int x;
	int y;
	y = 1;
	while(true){
		cin >> x ;
		
		if( x == 0){ break;};
		cout <<"Case "<< y <<": " << x <<endl ;
		y=y+1 ;
	};
	
	return 0;
}