#include<iostream>

using namespace std;

int main()
{
	int a, acont = 0;
	int b, bcont = 0;
	
	for(int i = 0; i < 4; i++){
		cin >> a;
		acont += a;
	}
	for(int i = 0; i < 4; i++){
		cin >> b;
		bcont += b;
	}
	cout << ((a > b) ? acont : bcont) << endl;
}
	