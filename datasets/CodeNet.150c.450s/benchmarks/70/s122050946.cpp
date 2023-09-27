#include<iostream>
#include<string>
using namespace std;

int main() {
	string youbi[7] = {"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
	int month[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	
	int gathu,nichi;
	while ( cin >> gathu >> nichi,gathu ) {
		int keika = 0;
		for ( int i = 0; i < gathu-1; i++ ) {
			keika += month[i];
		}
		keika += nichi;
		
		cout <<  youbi[keika % 7] << endl;
	}
	return 0;
}