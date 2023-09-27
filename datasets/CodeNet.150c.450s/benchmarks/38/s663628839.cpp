#include<iostream>
using namespace std;

int main(){

	int l = 0, x = 0, y = 0, z = 0;

	cin >> l;

	for(int i=0; i < l ; i++){
		cin >> x >> y >> z;

		if( x * x == y * y + z * z ||  x * x + y * y == z * z ||  x * x + z * z == y * y){
			cout << "YES" << endl;
		}

		else{
			cout << "NO" << endl;
		}
	}

	return 0;
}