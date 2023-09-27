#include <iostream>

using namespace std;

int main(){
	int a,a3;
	cin >> a;
	if( a<1 || 100<a){
		cout << "error." << endl;
		return 0;
	}
	a3=a*a*a;
	cout << a3 << endl;
	return 0;
}