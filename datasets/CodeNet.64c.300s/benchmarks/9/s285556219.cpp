#include <iostream>

using namespace std;

int main(){
	int i,n,d;
	int debt=100000;
	cin >> n;
	for(i=0; i<n; i++){
		debt = debt * 1.05;
		d = debt % 1000;
		if(d>0){
			debt = debt - d + 1000;
		}
	}
	cout << debt << endl;
}