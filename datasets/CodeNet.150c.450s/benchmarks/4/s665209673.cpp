#include<iostream>
using namespace std;

int main(){
	int m, f, r;
SAIKI:
	cin >> m >> f >> r;
	if( m + f + r == -3 ){ return 0; }
	if( m == -1 || f == -1 ){ cout << "F" << endl; }
	else if( m + f >= 80 ){ cout << "A" << endl; }
	else if( m + f >= 65 ){ cout << "B" << endl; }
	else if( m + f >= 50 ){ cout << "C" << endl; }
	else if( m + f >= 30 ){ if( r >= 50 ){ cout << "C" << endl; } else { cout << "D" << endl; } }
	else if( m + f < 30 ){ cout << "F" << endl;}
goto SAIKI;
return 0;
}