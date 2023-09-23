#include<iostream>
using namespace std;
int main() {
	double h1,h2,h3;
	h1=-1;
	h2=-1;
	h3=-1;
	double h;
	for(int i=0;i<10;i++) {
		cin >> h;
		if(h > h1) {
			h3 = h2;
			h2 = h1;
			h1 = h;
		}
		else if(h > h2) {
			h3 = h2;
			h2 = h;
		}
		else if(h > h3) {
			h3 = h;
		}
	}
	
	cout << h1 << endl;
	cout << h2 << endl;
	cout << h3 << endl;
	
	return 0;
}