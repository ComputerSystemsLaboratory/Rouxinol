#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;

	cin >> n;
	
	for(int i = 0; i < n; i++){
		int tate,yoko,naname;
		cin >> tate >> yoko >> naname;

		if(tate > naname){
			swap(tate,naname);
		}
		if(yoko > naname){
			swap(yoko,naname);
	}

		if(naname * naname == tate * tate + yoko * yoko)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}