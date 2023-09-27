#include <iostream>
using namespace std;

int max(int x,int y){
	int z;
	(x > y) ? (z = x) : (z = y);
	return z;
}

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a == b || a == c || b == c){
		cout << "No" << endl;
		return 0;
	}
	if( c == max(max(a,b),c)){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;
}	