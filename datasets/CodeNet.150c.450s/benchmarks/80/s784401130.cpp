#include <iostream>
using namespace std;

int main(){
	int a,b,p;
	a = b = 0;
	
	for(int i = 0; i < 4; i++){
		cin >> p;
		a += p;
	}
	
	for(int i = 0; i < 4; i++){
		cin >> p;
		b += p;
	}
		
	if(a > b){
		cout << a << endl;
	}else{
		cout << b << endl;
	}
	
	return 0;
}