#include<iostream>
#include<string>
using namespace std;

int main(){
	int n,a = 100000;
	cin >> n;
	for( int i = 0; i < n; i++ ){
		a = a*0.05 + a;
		if(a % 1000 > 0){
			a = a / 1000 * 1000 + 1000;
		}
	}
	cout << a << endl;
	
	return 0;
}