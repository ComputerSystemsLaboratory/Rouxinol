#include <iostream>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	if( -1000>a || a>1000 || -1000>b || b>1000){
		cout << "error." << endl;
		return 0;
	}
	if(a<b){
		cout << "a < b" << endl;
	}else if(a>b){
		cout << "a > b" << endl;
	}else if(a=b){
		cout << "a == b" << endl;
	}
	return 0;
}