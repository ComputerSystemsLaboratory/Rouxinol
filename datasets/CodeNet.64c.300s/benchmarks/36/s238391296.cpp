#include<iostream>

using namespace std;

int main(){

	int a1, a2, a3, t;

	cin >> a1 >> a2 >> a3;

	if ( a1 > a2 ){

		t = a1; a1 = a2; a2 = t;

	}

	if( a2 > a3 ){

		t = a2; a2 = a3; a3 = t;

	}

	if( a1 > a2 ){

		t = a1; a1 = a2; a2 = t;

	}

	cout << a1 << " " << a2 << " " << a3 << endl;

	return 0;

}