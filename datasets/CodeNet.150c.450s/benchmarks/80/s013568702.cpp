#include<iostream>
using namespace std;

int main(){
	int S=0, T=0, n;
	for( int i=0; i<8; i++ ){
		cin >> n;
		(i/4?T:S) += n;
	}
	cout << (S>T?S:T) << endl;
	return 0;
}