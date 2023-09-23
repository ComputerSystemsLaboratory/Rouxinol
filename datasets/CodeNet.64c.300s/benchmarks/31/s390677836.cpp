#include <iostream>
using namespace std;

int main(){
	int a[31] = {}, n;
	for(int i=0 ; i<28 ; ++i ){
		cin >> n;
		a[n] = 1;
	}
	for(int i=1 ; i<31 ; ++i ){
		if( !a[i] ){
			cout << i << endl;
		}
	}
}