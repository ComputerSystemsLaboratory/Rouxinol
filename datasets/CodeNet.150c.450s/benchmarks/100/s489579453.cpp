#include <iostream>
using namespace std;

int main(){
	
	long long int a,b,c,d;
	
	cin >> a;
	
	for(b=1; b<=a; b++){
		c = 1;
		for(d=b; d>=1; d--){
			c *= d;
		}
	}
	
	cout << c << '\n';
	
	return 0;
}