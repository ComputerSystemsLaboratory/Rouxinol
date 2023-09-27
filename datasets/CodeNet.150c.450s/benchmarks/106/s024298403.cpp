#include<iostream>
using namespace std;

int main(){
	int a, b, c ;
	int n = 0;
	cin >> a >> b >> c ;
	while(1){
		if(c % a == 0){
		n++;
		}
		if(a == b){
			break;
		}
		a++;
	}
	cout << n << endl;
	
	return 0;
} 