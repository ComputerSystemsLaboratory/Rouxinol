#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if( a<0 || b<0 || c<0 || a>100 || b>100 || c>100 ){
		cout << "error." << endl;
		return 0;
	}
	if( a<b && b<c ){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;
}