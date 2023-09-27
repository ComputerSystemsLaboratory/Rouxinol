#include<iostream>
using namespace std;

int main(){
	int a,b,c,d=0;
	cin >> a >> b >> c;

	for(int x=a; x<=b;x++){
		if( c%x == 0 ){
			d++;
		}
	}

	cout << d << "\n";
	return 0;
	
}